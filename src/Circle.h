#ifndef CIRCLE_CIRCLE_H
#define CIRCLE_CIRCLE_H

class Circle {
public:
    const double PI = 3.14159;

    double area();
    double circumference();
    double diameter();
    double radius();

    void setDiameter(double diameter);
    void setRadius(double radius);

private:
    double myDiameter;
};

#endif //CIRCLE_CIRCLE_H
