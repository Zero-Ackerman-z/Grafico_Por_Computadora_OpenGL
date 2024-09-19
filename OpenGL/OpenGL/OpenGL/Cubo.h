#pragma once
#include "Figura3D.h"
#include "Cuadrado.h"  // Asegúrate de incluir el encabezado para Cuadrado

class Cubo :
    public Figura3D
{
private:
    Cuadrado cuad;  // Cambia el tipo de int a Cuadrado

public:
    Cubo(const std::string& nombre, int grosorBords, int color, int lado)
        : Figura3D(nombre, grosorBords, color), cuad(nombre, grosorBords, color, lado) {}

    void dibujar() const override;
    int calcularVolumen() const override;
};

