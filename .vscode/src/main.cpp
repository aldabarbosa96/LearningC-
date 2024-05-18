/*Esto es mi primer contacto con el lenguaje C++.
Además es también la primera vez que decido usar VSCode para aprender nuevo código e iniciar un proyecto.
Este fichero son simplemente pruebas variadas de funciones para ir aprendiendo la sintaxis.*/

#include <iostream>
#include <string>
using namespace std; // si declaramos el namespace no es necesario usarlo en los objetos que lo necesitan

/*El orden en C++ es importante. El compilador funciona de forma secuencial; Esto significa que cuando el compilador encuentra una referencia
a una función o a una variable, necesita haber visto ya una declaración de esa función o variable, o bien su definición completa, para saber cómo manejarla.*/
long suma(); // si no declaramos aquí el comppilador al entrar en el main no sabe
int inputLenght();

int main()
{
    cout << "Prueba básica de output por terminal" << endl;
    cout << "Resultado de la suma de tus inputs en bucle anidado: " << suma() << endl;
    inputLenght();
    return 0;
}

long suma()
{ // las funciones se definen poniendo el tipo y el nombre (strings se definen con la clausula standard)
    long x, y;
    cout << "Introduce el primer número: "; //"cout" C Out representa la salida por terminal
    cin >> x;                               //"cin" C In representa el input del usuario
    cout << "Introduce el segundo número: ";
    cin >> y;
    if (x > 9999 || y > 9999)
    {
        cout << "Número demasiado grande." << endl;
        exit(0);
    }
    else
    {
        long num = 0;
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                num += x + y;
            }
        }
        return num;
    }
}

// obtiene una línea de texto, llama a suma y multiplica su resultado por la longitud del texto.
int inputLenght()
{
    string linea;
    cout << "Introduce un texto: ";
    getline(cin >> ws, linea); //"ws" hace referencia a whitespace. Sería como meter un sc.nextLine() para consumir el espacio de salto de línea.

    int resultado = static_cast<int>(linea.length());
    cout << "La longitud del input del usuario es: " << resultado << " caracteres." << endl;
    return resultado;
}
