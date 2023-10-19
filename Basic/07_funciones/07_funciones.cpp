#include <iostream>
using namespace std;

// Función para calcular la suma de dos números enteros
int suma(int a, int b)
{
    int resultado = a + b;
    return resultado;
}

// Función para calcular el área de un rectángulo
double calcularAreaRectangulo(double longitud, double ancho)
{
    return longitud * ancho;
}

// Función para verificar si un número es par o impar
bool esPar(int numero)
{
    return numero % 2 == 0;
}

// Función para calcular el factorial de un número
int calcularFactorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * calcularFactorial(n - 1);
    }
}

// Función para convertir grados Celsius a grados Fahrenheit
double celsiusToFahrenheit(double celsius)
{
    return (celsius * 9 / 5) + 32;
}

// Función para encontrar el máximo de dos números
int encontrarMaximo(int a, int b)
{
    return (a > b) ? a : b;
}

int main()
{
    // Ejemplo de uso de las funciones

    int numero1 = 5;
    int numero2 = 7;
    cout << "La suma de " << numero1 << " y " << numero2 << " es " << suma(numero1, numero2) << endl;

    double longitud = 5.0;
    double ancho = 3.0;
    cout << "Área del rectángulo: " << calcularAreaRectangulo(longitud, ancho) << endl;

    int numero = 7;
    if (esPar(numero))
    {
        cout << numero << " es un número par." << endl;
    }
    else
    {
        cout << numero << " es un número impar." << endl;
    }

    int n = 5;
    cout << "Factorial de " << n << " es " << calcularFactorial(n) << endl;

    double celsius = 25.0;
    cout << celsius << " grados Celsius equivalen a " << celsiusToFahrenheit(celsius) << " grados Fahrenheit." << endl;

    int x = 10;
    int y = 7;
    cout << "El máximo de " << x << " y " << y << " es " << encontrarMaximo(x, y) << endl;

    return 0;
}
