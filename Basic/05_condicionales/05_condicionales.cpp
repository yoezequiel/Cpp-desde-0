#include <iostream>
using namespace std;

int main()
{
    int edad;

    // Pedir al usuario su edad
    cout << "Ingresa tu edad: ";
    cin >> edad;

    // Estructura condicional if-else
    if (edad >= 18)
    {
        cout << "Eres mayor de edad." << endl;
    }
    else
    {
        cout << "Eres menor de edad." << endl;
    }

    // Estructura condicional if-else anidada
    if (edad >= 18)
    {
        cout << "Eres mayor de edad." << endl;
    }
    else if (edad >= 13)
    {
        cout << "Eres un adolescente." << endl;
    }
    else
    {
        cout << "Eres un niño." << endl;
    }

    // Estructura condicional switch
    char opcion;
    cout << "Elige una opción (A, B, o C): ";
    cin >> opcion;

    switch (opcion)
    {
    case 'A':
        cout << "Seleccionaste la opción A." << endl;
        break;
    case 'B':
        cout << "Seleccionaste la opción B." << endl;
        break;
    case 'C':
        cout << "Seleccionaste la opción C." << endl;
        break;
    default:
        cout << "Opción no válida." << endl;
    }

    return 0;
}
