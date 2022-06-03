#include "Shape.hpp"
#include<cmath>

Rectangle::Rectangle()
{

}

Rectangle::Rectangle(Point ur, Point ll)
{
    int width = ur.x - ll.x;
    int height = ur.y - ll.y;

    this->a = width;
    this->b = height;
}


void Rectangle::setDimensions(int x, int y)
{
    a = x;
    b = y;
}

int Rectangle::getField()
{
    return a * b;
}

int Rectangle::getCircuit()
{
    return (2 * a) + (2 * b);
}

#if 0 
void Circle::setDimensions(int r, double PI)
{
    r = 1;
    PI = 3.14;
} 

#endif