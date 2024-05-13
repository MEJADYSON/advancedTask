#include "Quest3.Triangle(declaration).h"

shapes::Triangle::Triangle()
{
   height = 1;
   base = 1;
}
shapes::Triangle::Triangle(double newHeight, double newBase)
{
   height = newHeight;
    base = newBase;
}
void shapes::Triangle::setHeight(double newHeight)
{
    height = (newHeight>=0) ? newHeight : 0;
}
void shapes::Triangle::setBase(double newBase)
{
   base = (newBase>=0) ? newBase : 0;
}
double shapes::Triangle::getHeight()
{
    return height;
}
double shapes::Triangle::getBase()
{
   return base;
}
shapes::Triangle::~Triangle()
{
   // Code
}