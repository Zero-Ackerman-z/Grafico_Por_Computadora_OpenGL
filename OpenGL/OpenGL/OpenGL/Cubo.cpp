#include "IncludeGL.h"
#include "Cubo.h"

void Cubo::dibujar() const {
    glColor3f(0.0f, 1.0f, 0.0f);  // Color (V)
    // Dibujar el cubo usando las caras del cuadrado
    float lado = cuad.calcularPerimetro() / 4.0f;  // Calcula el lado del cubo desde el cuadrado

    // Dibuja las 6 caras del cubo
    glPushMatrix();
    glTranslatef(0.0f, 0.0f, 0.0f);  // Mueve la posición del cubo
    for (int i = 0; i < 6; ++i) {
        // Cambiar las caras del cubo en diferentes orientaciones 
        glPushMatrix();
        // ajustar la posición y orientación para cada cara del cubo
        glutWireCube(lado);  // Dibuja un cubo usando el lado del cuadrado
        glPopMatrix();
    }
    glPopMatrix();
}

int Cubo::calcularVolumen() const {
    return cuad.calcularArea() * cuad.calcularArea(); // Volumen del cubo
}