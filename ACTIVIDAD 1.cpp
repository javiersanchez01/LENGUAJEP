#include <stdio.h>
#include <iostream>

int main()
{
    int edad;
    std::cout << "Ingrese su edad: ";
    std::cin >> edad;

    if (edad >= 18) {
        std::cout << "Usted es mayor de edad puede pasar." << std::endl;
    } else {
        std::cout << "Usted es menor de edad no puede pasar." << std::endl;
    }

    return 0;
}

