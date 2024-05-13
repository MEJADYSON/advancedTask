#include <iostream>
#include "Quest1.Rectangle.h"

//Set a new length
void Rectangle::setLength(float newLength)
{
    length = (newLength>=0) ? newLength : 0;
}
//Set a new width
void Rectangle::setWidth(float newWidth)
{
    width = (newWidth>=0) ? newWidth : 0;
}

//Access the length
float Rectangle::getLength()
{
    return length;
}
//Access the width
float Rectangle::getWidth()
{
    return width;
}

//Return area of the Rectangle
float Rectangle::getArea()
{
    return length * width;
}

Rectangle::~Rectangle()
{
    //code
}
