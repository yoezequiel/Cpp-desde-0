#include <iostream>
using namespace std;

int main()
{
    // Operadores aritméticos
    int a = 10;
    int b = 20;
    int resultado;

    resultado = a + b; // Suma
    cout << "Suma: " << resultado << endl;

    resultado = a - b; // Resta
    cout << "Resta: " << resultado << endl;

    resultado = a * b; // Multiplicación
    cout << "Multiplicación: " << resultado << endl;

    resultado = b / a; // División entera
    cout << "División entera: " << resultado << endl;

    resultado = b % a; // Módulo (resto de la división)
    cout << "Módulo: " << resultado << endl;

    // Operadores de asignación
    int x = 5;
    x += 3; // Equivalente a x = x + 3
    cout << "Operador de asignación (+=): " << x << endl;

    // Operadores de comparación
    bool igual = (a == b);         // Igual a
    bool no_igual = (a != b);      // Diferente de
    bool mayor = (a > b);          // Mayor que
    bool menor = (a < b);          // Menor que
    bool mayor_o_igual = (a >= b); // Mayor o igual que
    bool menor_o_igual = (a <= b); // Menor o igual que

    cout << "Igual a: " << igual << endl;
    cout << "Diferente de: " << no_igual << endl;
    cout << "Mayor que: " << mayor << endl;
    cout << "Menor que: " << menor << endl;
    cout << "Mayor o igual que: " << mayor_o_igual << endl;
    cout << "Menor o igual que: " << menor_o_igual << endl;

    // Operador ternario condicional
    string resultado_ternario = (a % 2 == 0) ? "Es par" : "Es impar";
    cout << "El número " << a << " " << resultado_ternario << endl;

    // Operadores lógicos
    bool condicion1 = true;
    bool condicion2 = false;

    bool and_logico = condicion1 & condicion2; // AND lógico
    bool or_logico = condicion1 | condicion2;  // OR lógico
    bool not_logico = !condicion1;             // NOT lógico

    cout << "AND lógico: " << and_logico << endl;
    cout << "OR lógico: " << or_logico << endl;
    cout << "NOT lógico: " << not_logico << endl;

    return 0;
}
