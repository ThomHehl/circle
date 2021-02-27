#include <iostream>
#include "Circle.h"

int main() {
    Circle circle = Circle();
    circle.setDiameter(9);

    std::cout << "Radius of circle is:" << circle.radius() << std::endl;
    return 0;
}
