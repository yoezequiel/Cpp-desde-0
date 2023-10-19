#include <iostream>
using namespace std;

// Función que lanza una excepción
int dividir(int numerador, int denominador)
{
    if (denominador == 0)
    {
        throw "Error: división por cero";
    }
    return numerador / denominador;
}

int main()
{
    int numerador, denominador;

    cout << "Ingresa el numerador: ";
    cin >> numerador;

    cout << "Ingresa el denominador: ";
    cin >> denominador;

    try
    {
        int resultado = dividir(numerador, denominador);
        cout << "Resultado de la división: " << resultado << endl;
    }
    catch (const char *error)
    {
        cerr << "Excepción capturada: " << error << endl;
    }

    return 0;
}
