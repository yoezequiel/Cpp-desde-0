#include <iostream>

using namespace std;

int main()
{
    // Puntero a entero
    int numero = 42;
    int *punteroEntero = &numero; // Declarar un puntero y asignar la dirección de 'numero'

    cout << "Valor de numero: " << numero << endl;
    cout << "Dirección de numero: " << &numero << endl;
    cout << "Valor a través del puntero: " << *punteroEntero << endl;

    // Puntero a arreglo
    int arreglo[] = {1, 2, 3, 4, 5};
    int *punteroArreglo = arreglo; // El nombre del arreglo es un puntero al primer elemento

    for (int i = 0; i < 5; i++)
    {
        cout << "Elemento " << i << ": " << *(punteroArreglo + i) << endl;
    }
}
