#pragma once

namespace RectangleSpace {
    class RectangleClass {
    private:
        double length;
        double width;
    public:
        RectangleClass() { length = 0; width = 0; }
        RectangleClass(double l, double w) { length = l; width = w; }
        double getArea() { return length * width; }
        double getPerimeter() { return 2 * (length + width); }
        void setLength(double l) { length = l; }
        void setWidth(double w) { width = w; }
        double getLength() { return length; }
        double getWidth() { return width; }
        static int count; // статичне поле
        static int getCount() { return count; } // статичний метод
    };
}