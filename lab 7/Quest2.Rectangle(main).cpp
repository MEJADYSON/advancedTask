#include <iostream>
#include "Q2.(declaration).h"
using namespace std;

int main()
{
    // Create a rectangle object
    Rectangle rect;
    
    //Enter the length of the Rectangle
    cout<<"Enter the length: ";
    float length;
    cin>>length;
    
    //Enter the width of the Rectangle
    cout<<"Enter the width: ";
    float width;
    cin>>width;
    
    // //Set the length
    // rect.setLength(length);
    
    Rectangle rec;
    rec(length, width); // Overloaded constructor
    rec.setValues(length, width);
    
    //Set the width
    // rect.setWidth(width);
    
    //Access the length of the Rectangle
    // float accessedLength = rect.getLength();
    // //Access the width
    // float accessedWidth = rect.getWidth();
    
    //Print the area of the Rectangle
    cout<<"The area of rectangle of length "<<rec.getLength()<<" and width "<<rec.getWidth()<<" is "<<rec.getArea();
    
    return 0;
}