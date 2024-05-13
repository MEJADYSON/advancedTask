#include "Quest3.Circle(declaration).h"

shapes::Circle::Circle()
{
    radius = 1;
}
shapes::Circle::Circle(double newRadius)
{
    radius = newRadius;
}
void shapes::Circle::setRadius(double newRadius)
{
    radius = (newRadius >= 0) ? newRadius : 0;
}
double shapes::Circle::getRadius()
{
    return radius;
}
shapes::Circle::~Circle()
{
    //Code
}
