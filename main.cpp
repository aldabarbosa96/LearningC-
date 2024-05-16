//primeras pruebas en C++
#include <iostream>

int suma(){
    int num = 0;
    for (int i = 0; i < 20; i++){
        for (int  j = 0; j < 15; j++){
            num++;
        }
    }
    return num;
}


int main() {
    std::cout << "Prueba básica de output por terminal" << std::endl; //el endl equivale a hacer \n en java
    std::cout << "Resultado del bucle anidado: " << suma() << std::endl;
    return 0;
}


    
