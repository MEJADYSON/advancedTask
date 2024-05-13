#include "Quest3.Square(declaration).h"

shapes::Square::Square()
{
    length = 1;
}
shapes::Square::Square(double newLength)
{
   length = newLength;
}
void shapes::Square::setLength(double newLength)
{
    length = (newLength>=0) ? newLength : 0;
}
double shapes::Square::getLength()
{
    return length;
}
shapes::Square::~Square()
{
    // Code
}