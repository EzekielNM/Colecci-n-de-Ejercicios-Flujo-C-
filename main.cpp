//
// Created by Ezekiel on 12/12/2024.
//

#include "main.h"
// main.cpp
#include <iostream>
#include "Matematicas.h"
#include "Geometria.h"
#include "Ciencia.h"
#include <vector>
#include <map>
#include <set>

int main() {
    // Ejercicio 1: Utilización de un espacio de nombres
    std::cout << "\nEjercicio 1:\n";
    std::cout << "Suma: " << Matematicas::suma(5, 3) << std::endl;
    std::cout << "Resta: " << Matematicas::resta(5, 3) << std::endl;

    // Ejercicio 2: Espacio de nombres en diferentes archivos
    std::cout << "\nEjercicio 2:\n";
    std::cout << "Área del triángulo: " << Geometria::calcularAreaTriangulo(5, 10) << std::endl;
    std::cout << "Área del círculo: " << Geometria::calcularAreaCirculo(7) << std::endl;

    // Ejercicio 3: Clase dentro de un espacio de nombres
    std::cout << "\nEjercicio 3:\n";
    Geometria::Circulo circulo(7);
    std::cout << "Área del círculo: " << circulo.calcularArea() << std::endl;
    std::cout << "Perímetro del círculo: " << circulo.calcularPerimetro() << std::endl;

    // Ejercicio 4: Subespacio de nombres
    std::cout << "\nEjercicio 4:\n";
    double masa = 2.0; // kg
    std::cout << "Energía: " << Ciencia::Fisica::calcularEnergia(masa) << " J" << std::endl;

    // Ejercicio 5: STL
    std::cout << "\nEjercicio 5:\n";
    std::vector<int> numeros = {1, 2, 3};
    numeros.push_back(4);
    for (int num : numeros) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::map<std::string, int> mapa;
    mapa["uno"] = 1;
    mapa["dos"] = 2;
    for (const auto& par : mapa) {
        std::cout << par.first << ": " << par.second << std::endl;
    }

    std::set<int> conjunto = {3, 1, 4};
    conjunto.insert(2);
    for (int num : conjunto) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
