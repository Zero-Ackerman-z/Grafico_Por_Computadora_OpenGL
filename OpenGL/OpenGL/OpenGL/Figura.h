#pragma once
#include <string>

class Figura {
protected:
    std::string nombre;
    int grosorBords;
    int color;
public:
    Figura(const std::string& nombre, int grosorBords, int color)
        : nombre(nombre), grosorBords(grosorBords), color(color) {}

    virtual void dibujar() const = 0;
    virtual ~Figura() {}
};
