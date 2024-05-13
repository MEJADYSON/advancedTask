#include<iostream>
using namespace std;

// Include square, triangle, and circle header files
#include "Quest3.Square(declaration).h"
#include "Quest3.Triangle(declaration).h"
#include "Quest3.Circle(declaration).h"

// Create namespace 
namespace shapes
{
    // Create a class
    class Area
    {
        public:
            //Return area of the circle 
            static double getAreaOfCircle(Circle c)
            {
                return 3.14159 * c.getRadius() * c.getRadius();
            }
            //Return area of the triangle 
            static double getAreaOfTriangle(Triangle t)
            {
                return 0.5 * t.getBase() * t.getHeight();
            }
            //Return area of the Square
            static double getAreaOfSquare(Square s)
            {
                return s.getLength() * s.getLength();
            }
            
    };
}

// Main function
int main()
{
    int radius, base, height, length;
    
    int choice;
    
    // Start do while loop
    do
    {
        cout<<"Choose any shape to calculate area."<<endl;
        cout<<"1. Calculate the area of a circle"<<endl;
        cout<<"2. Calculate the area of triangle"<<endl;
        cout<<"3. Calculate the area of a square"<<endl;
        cout<<"Enter 1, 2, 3 to select your choice and 4 to terminate:"<<endl;
        cin>>choice;

        //Check if the input values are in the range 1-4, else prompt again
        if (!(choice==1 || choice==2 || choice==3 || choice==4))
        {
            cout<<"Sorry, wrong input. Please try again.\n"<<endl;
        }
        else{
            // Switch the input values 
            switch(choice)
            {
                case 1: 
                {
                    //Get radius of the circle and call for calculting area
                    shapes::Area area;
                    shapes::Circle circle;
                    cout<<"Enter the radius of this circle: \n";
                    cin>>radius;
                    circle.setRadius(radius);
                    cout<<"Area of the circle of radius "<<circle.getRadius()<<" is "<<area.getAreaOfCircle(circle)<<"\n"<<endl;
                    break;
                }
                case 2:
                {
                    // Get height and base and call for calculating area.
                    shapes::Area area;
                    shapes::Triangle triangle;
                    cout<<"Enter the height and base of the triangle: \n";
                    cin>>height>>base;
                    triangle.setHeight(height);
                    triangle.setBase(base);
                    cout<<"Area of the triangle of height "<<triangle.getHeight()<<" and base "<<triangle.getBase()<<" is "<<area.getAreaOfTriangle(triangle)<<"\n"<<endl;
                    break;
                }
                case 3:
                {
                    // Get length and call for calculating area
                    shapes::Area area;
                    shapes::Square square;
                    cout<<"Enter the length of the square: \n";
                    cin>>length;
                    square.setLength(length);
                    cout<<"Area of the square of length "<<square.getLength()<<" is "<<area.getAreaOfSquare(square)<<"\n"<<endl;
                    break;
                }
                case 4:
                {
                    int answer;
                    cout<<"You have selected 4 which is an exit code. Do you really want to exit??"<<endl;
                    cout<<"Enter 1 for yes or 0 for no. ";
                    cin>>answer;
                    if (answer == 0)
                    {
                        
                    }
                    else{
                    exit(0);
                    }
                }
            }
        }
    }while(true);
return 0;
}