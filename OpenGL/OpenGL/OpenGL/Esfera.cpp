#define _USE_MATH_DEFINES  // Necesario para M_PI
#include "IncludeGL.h"
#include "Esfera.h"
#include <cmath>

void Esfera::dibujar() const {
    glColor3f(1.0f, 0.0f, 0.0f);  // Color rojo
    glutWireSphere(radio, 20, 20); // Dibuja la esfera
}

int Esfera::calcularVolumen() const {
    return static_cast<int>(4.0 / 3.0 * M_PI * std::pow(radio, 3));
}