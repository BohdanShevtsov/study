#pragma once

namespace CircleSpace {
    class CircleClass {
    private:
        double radius;
    public:
        CircleClass() { radius = 0; }
        CircleClass(double r) { radius = r; }
        double getArea() { return 3.14159 * radius * radius; }
        double getPerimeter() { return 2 * 3.14159 * radius; }
        void setRadius(double r) { radius = r; }
        double getRadius() { return radius; }
    };
}