#include <iostream>
using namespace std;

int main()
{
    // Declaración e inicialización de un array de enteros
    int numeros[5]; // Declara un array de 5 enteros

    // Asignación de valores a los elementos del array
    numeros[0] = 10;
    numeros[1] = 20;
    numeros[2] = 30;
    numeros[3] = 40;
    numeros[4] = 50;

    // Acceso a los elementos del array e impresión
    cout << "Elemento 1: " << numeros[0] << endl;
    cout << "Elemento 2: " << numeros[1] << endl;
    cout << "Elemento 3: " << numeros[2] << endl;
    cout << "Elemento 4: " << numeros[3] << endl;
    cout << "Elemento 5: " << numeros[4] << endl;

    // Declaración e inicialización de un array de cadenas
    string nombres[3] = {"Alice", "Bob", "Charlie"};

    // Acceso a los elementos del array e impresión
    cout << "Nombre 1: " << nombres[0] << endl;
    cout << "Nombre 2: " << nombres[1] << endl;
    cout << "Nombre 3: " << nombres[2] << endl;

    // Tamaño de un array
    int tamano = sizeof(numeros) / sizeof(numeros[0]);
    cout << "El tamaño del array de números es: " << tamano << endl;

    return 0;
}
