#include <iostream>
using namespace std;

int main()
{
    // Bucle while
    int contador = 0;
    while (contador < 5)
    {
        cout << "Iteración " << contador << endl;
        contador++;
    }

    // Bucle do-while
    int otro_contador = 0;
    do
    {
        cout << "Otra iteración " << otro_contador << endl;
        otro_contador++;
    } while (otro_contador < 5);

    // Bucle for
    for (int i = 0; i < 5; i++)
    {
        cout << "Bucle for, iteración " << i << endl;
    }

    // Bucle for-each (C++11 y posteriores)
    int arreglo[] = {1, 2, 3, 4, 5};
    for (int elemento : arreglo)
    {
        cout << "Elemento del arreglo: " << elemento << endl;
    }

    return 0;
}
