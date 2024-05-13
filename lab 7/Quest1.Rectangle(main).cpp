#include <iostream>
#include "Q1.Rectangle.h.h"
using namespace std;

int main()
{
    //Create a rectangle object
    Rectangle rect;
    
    //Enter the length of the Rectangle
    cout<<"Enter the length: ";
    float length;
    cin>>length;
    
    //Enter the width of the Rectangle
    cout<<"Enter the width: ";
    float width;
    cin>>width;
    
    //Set the length
    rect.setLength(length);
    //Set the width
    rect.setWidth(width);
    
    //Access the length of the Rectangle
    float accessedLength = rect.getLength();
    //Access the width
    float accessedWidth = rect.getWidth();
    
    //Print the area of the Rectangle
    cout<<"The area of rectangle of length "<<accessedLength<<" and width "<<accessedWidth<<" is "<<rect.getArea();
    
    return 0;
}