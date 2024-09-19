#include "IncludeGL.h"
#include "Cuadrado.h"
void Cuadrado::dibujar() const {
    glColor3f(1.0f, 1.0f, 0.0f);  // Color (A)
    glBegin(GL_QUADS);
    glVertex2f(-lado / 2.0f, -lado / 2.0f);
    glVertex2f(lado / 2.0f, -lado / 2.0f);
    glVertex2f(lado / 2.0f, lado / 2.0f);
    glVertex2f(-lado / 2.0f, lado / 2.0f);
    glEnd();
}

int Cuadrado::calcularArea() const {
    return lado * lado;
}

int Cuadrado::calcularPerimetro() const {
    return 4 * lado;
}

void Cuadrado::cambiarTamano(int nuevoLado) {
    lado = nuevoLado;
}