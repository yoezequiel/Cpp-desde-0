## Configuración

En esta primera lección, aprenderás cómo configurar tu entorno de desarrollo para comenzar a programar en C++. La configuración adecuada es un paso crucial en tu viaje como programador en C++, y en esta lección te guiaremos a través de los pasos esenciales.

### Objetivos de la lección

-   Configurar un entorno de desarrollo C++ en tu computadora.
-   Instalar un compilador C++.
-   Configurar un editor de código.
-   Comprender los conceptos básicos de un programa en C++.

### Paso 1: Instalación del compilador C++

El primer paso es instalar un compilador C++. Uno de los compiladores más populares para C++ es **GNU Compiler Collection (GCC)**. Aquí están los pasos generales:

-   **En Windows**: Puedes instalar **MinGW** o usar un entorno como **Code::Blocks** que incluye un compilador.

-   **En macOS**: Puedes instalar GCC a través de Xcode o utilizar **Homebrew** para instalarlo.

-   **En Linux**: Dependiendo de tu distribución, puedes instalar GCC con un simple comando en la terminal.

Asegúrate de que la instalación del compilador sea exitosa ejecutando `g++ --version` en tu terminal para verificar que esté instalado.

### Paso 2: Configuración del editor de código

Puedes utilizar cualquier editor de código o entorno de desarrollo integrado (IDE) de tu elección para escribir código C++. Ejemplos populares incluyen **Visual Studio Code**, **Eclipse**, **Code::Blocks**, **CLion** y **Xcode**.

-   Instala tu editor de código preferido.
-   Configura el resaltado de sintaxis y otras preferencias específicas de C++.
-   Asegúrate de que el editor pueda utilizar el compilador que instalaste en el Paso 1.

### Paso 3: Escribir y compilar tu primer programa

Ahora, es hora de escribir tu primer programa en C++. Puedes usar tu editor de código para crear un archivo de código fuente con la extensión `.cpp`. Aquí tienes un ejemplo simple de un programa "Hola, Mundo!" en C++:

```cpp
#include <iostream>

int main() {
    std::cout << "Hola, Mundo!" << std::endl;
    return 0;
}
```

-   Guarda este archivo con una extensión `.cpp`, por ejemplo, `hola_mundo.cpp`.

-   Abre una terminal y navega al directorio donde guardaste el archivo.

-   Compila el programa usando el compilador que instalaste en el Paso 1. En el caso de GCC, puedes usar el comando: `g++ hola_mundo.cpp -o hola_mundo`.

-   Ejecuta el programa compilado: `./hola_mundo` (en sistemas Unix) o `hola_mundo.exe` (en Windows).

¡Felicidades! Has configurado correctamente tu entorno de desarrollo y has compilado y ejecutado tu primer programa en C++.

En la siguiente lección, profundizaremos en los conceptos fundamentales de C++ y aprenderemos a escribir código más avanzado.
