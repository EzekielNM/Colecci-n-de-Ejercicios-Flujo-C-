//
// Created by Ezekiel on 12/12/2024.
//

#include "Geometria.h"
#include <cmath>

namespace Geometria {
    double calcularAreaTriangulo(double base, double altura) {
        return (base * altura) / 2;
    }

    double calcularAreaCirculo(double radio) {
        return M_PI * radio * radio;
    }

    Circulo::Circulo(double r) : radio(r) {}

    double Circulo::calcularArea() const {
        return M_PI * radio * radio;
    }

    double Circulo::calcularPerimetro() const {
        return 2 * M_PI * radio;
    }
}

