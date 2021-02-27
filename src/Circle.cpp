#include "Circle.h"

double Circle::area() {
    double result = 2 * PI * radius();
    return result;
};

double Circle::circumference() {
    double result = PI * this->myDiameter;
    return result;
};

double Circle::diameter() {
    return this->myDiameter;
};

double Circle::radius() {
    double result = this->myDiameter / 2;
    return result;
};

void Circle::setDiameter(double diam) {
    this->myDiameter = diam;
}

void Circle::setRadius(double radius) {
    this->myDiameter = radius * 2;
}