#include <iostream>
#include "Rectangle.h"
#include "Circle.h"
#include "Triangle.h"
#include <cmath>

using namespace std;
using namespace RectangleSpace;
using namespace CircleSpace;
using namespace TriangleSpace;



int main() {
    
    RectangleClass r(4.2, 5.1);
    CircleClass c(2);
    TriangleClass t(1, 1, 1);

    cout << "Rectangle area: " << r.getArea() << endl;
    cout << "Circle area: " << c.getArea() << endl;
    cout << "Triangle area: " << t.getArea() << endl;

    r.setLength(9);
    cout << "Rectangle length: " << r.getLength() << endl;

    cout << "Rectangle count: " << RectangleClass::getCount() << endl;

    return 0;
}

