#include "iostream"
#include "conio.h"
#include "stdlib.h"

using namespace std;

const int longCad = 20; //Constante para la variable char

struct costoPorArticulo //Estructura que almacena nombre, cantidad, precio y costo por articulos
{
    char nombreArticul[longCad + 1];
    int cantidad;
    float precio;
    float costoPorArticulo;
} A[4]; //Arreglo

//Declaracion de funciones
void DatosProducto();           //Funcion para el ingreso de datos
void Costo();                   //Funcion para realizar operacion de costos por articulo
void MostrarContenidoArreglo(); //Funcion que muestra los 4 resultados
void CostoTotal();              //Funcion que realiza la suma de los costos por articulos

int main()
{
    int CanArticulos = 0, j;

    cout<<endl;
    cout<<"PROGRAMA QUE CREA FACTURA DE SUS PRODUCTOS!"<<endl;
    cout<<endl;
    cout << "Ingresa la cantidad de articulos a ingresar: " << endl;
    cin >> CanArticulos;

    int tamanyo = sizeof(A) / sizeof(int);

    //Llamado de las funciones a la funcion principal
    DatosProducto();
    Costo();
    MostrarContenidoArreglo();
    CostoTotal();

    return 0;
}

void DatosProducto() //Fucion ingreso de datos
{
    for (int i = 0; i < 4; i++)
    {
        cout << "Ingrese el nombre del producto "<< i + 1 << " : "<< endl;
        fflush(stdin);
        cin.getline(A[i].nombreArticul, 20);
        cout << "Ingrese la cantidad de producto: " << endl;
        cin >> A[i].cantidad;
        cout << "Ingrese el costo del producto: " << endl;
        cin >> A[i].precio;
        cin.ignore();
        cout<<endl;
    }
}

void Costo() //Funcion de los costos por articulo
{
    for (int i = 0; i < 4; i++)
    {
        A[i].costoPorArticulo = A[i].precio * A[i].cantidad;
    }
}

void MostrarContenidoArreglo() //Funcion que muestra el resultado
{
    for (int i = 0; i < 4; i++)
    {
        cout << "El nombre del producto "<< i + 1  <<" es: " << A[i].nombreArticul << endl;
        cout << "La cantidad del producto son: " << A[i].cantidad << endl;
        cout << "El precio de producto es: " << A[i].precio << " Dolares" << endl;
        cout << "El costo por articulo es : " << A[i].costoPorArticulo << " Dolares" << endl;
        cout << endl;
    }
}

void CostoTotal() //Funcion que realiza la suma de los costos
{
    float costoTotal = 0;
    for (int i = 0; i < 4; i++)
    {
        costoTotal += A[i].costoPorArticulo;

        cout << "El costo total es: " << costoTotal << endl;
    }
}