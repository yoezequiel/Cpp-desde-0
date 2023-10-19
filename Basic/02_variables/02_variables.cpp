#include <iostream>
using namespace std;

int main()
{
    string my_string_variable = "Mi variable de cadena";
    cout << my_string_variable << endl;

    int my_int_variable = 5;
    cout << my_int_variable << endl;

    bool my_bool_variable = false;
    cout << my_bool_variable << endl;

    // Concatenación de variables en un cout
    cout << my_string_variable << " " << my_int_variable << " " << my_bool_variable << endl;
    cout << "Este es el valor de: " << my_bool_variable << endl;

    // Variables en una sola línea
    string name = "Ezequiel", surname = "Casiano", alias = "yoezequiel";
    int age = 21;
    cout << "Me llamo: " << name << " " << surname << ". Mi edad es: " << age << ". Y mi alias es: " << alias << endl;

    // Inputs
    string input_name, input_age;
    cout << "¿Cuál es tu nombre? ";
    cin >> input_name;
    cout << "¿Cuántos años tienes? ";
    cin >> input_age;
    cout << "Nombre: " << input_name << endl;
    cout << "Edad: " << input_age << endl;
    return 0;
}
