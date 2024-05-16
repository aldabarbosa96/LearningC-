#include <iostream>
#include <string>

// Función que realiza un cálculo basado en dos entradas de usuario, sumando estos valores en un bucle anidado.
int suma() {
    int x, y;
    std::cout << "Introduce el primer número: ";
    std::cin >> x;
    std::cout << "Introduce el segundo número: ";
    std::cin >> y;

    int num = 0;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            num += x + y; // Suma x + y en cada iteración del bucle interno.
        }
    }
    return num;
}

// Función que obtiene una línea de texto, llama a suma y multiplica su resultado por la longitud del texto.
int resta() {
    std::string linea;
    std::cout << "Introduce un texto: ";
    std::getline(std::cin >> std::ws, linea); // Asegura que getline lee correctamente después de cin.
    
    int resultado = suma() * static_cast<int>(linea.length());
    std::cout << "Esta función devuelve la función suma() multiplicada por el length del input del usuario" << std::endl;
    std::cout << "Resultado: " << resultado << std::endl;
    return resultado;
}

// Función principal que dirige el flujo del programa.
int main() {
    std::cout << "Prueba básica de output por terminal" << std::endl;
    std::cout << "Resultado del bucle anidado: " << suma() << std::endl;
    resta();
    return 0;
}
