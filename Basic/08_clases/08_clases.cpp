#include <iostream>
using namespace std;

// Definición de una clase
class Rectangulo
{
private:
    int longitud;
    int ancho;

public:
    // Constructor
    Rectangulo(int l, int a)
    {
        longitud = l;
        ancho = a;
    }

    // Método para calcular el área del rectángulo
    int calcularArea()
    {
        return longitud * ancho;
    }

    // Método para calcular el perímetro del rectángulo
    int calcularPerimetro()
    {
        return 2 * (longitud + ancho);
    }
};

int main()
{
    // Creación de objetos de la clase Rectangulo
    Rectangulo rectangulo1(5, 3);
    Rectangulo rectangulo2(10, 7);

    // Llamada a métodos de los objetos
    int area1 = rectangulo1.calcularArea();
    int perimetro2 = rectangulo2.calcularPerimetro();

    // Impresión de los resultados
    cout << "Área del rectángulo 1: " << area1 << endl;
    cout << "Perímetro del rectángulo 2: " << perimetro2 << endl;

    return 0;
}
