//
// Created by Ezekiel on 12/12/2024.
//
#ifndef GEOMETRIA_H
#define GEOMETRIA_H

namespace Geometria {
    double calcularAreaTriangulo(double base, double altura);
    double calcularAreaCirculo(double radio);

    class Circulo {
    private:
        double radio;
    public:
        Circulo(double r);
        double calcularArea() const;
        double calcularPerimetro() const;
    };
}

#endif // GEOMETRIA_H

