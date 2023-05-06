#pragma once


namespace TriangleSpace {
    class TriangleClass {
    private:
        double side1;
        double side2;
        double side3;
    public:
        TriangleClass() { side1 = 0; side2 = 0; side3 = 0; }
        TriangleClass(double s1, double s2, double s3) { side1 = s1; side2 = s2; side3 = s3; }
        double getArea() {
            double sp = (side1 + side2 + side3) / 2;
            return sqrt(sp * (sp - side1) * (sp - side2) * (sp - side3));
        }
        double getPerimeter() { return side1 + side2 + side3; }
        void setSides(double s1, double s2, double s3) { side1 = s1; side2 = s2; side3 = s3; }
        double getSide1() { return side1; }
        double getSide2() { return side2; }
        double getSide3() { return side3; }
    };
}