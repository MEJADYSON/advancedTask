#include <iostream>
#include <limits>
using namespace std;


void areaOfSquare()
{
	int side;
	cout << "enter the side of square: ";
	cin >> side;
	cout << "the area of the square is: " << side * side <<endl;
}
void areaOfRectangle()
{
	int len, wid;
	cout << "enter the size of length: ";
	cin >> len;
	cout << "enter the size of width: ";
	cin >> wid;
	cout << "the area of the rectangle is: " << len * wid <<endl;
}
void areaOfTriangle()
{
	int base, height;
	cout << "enter the base of triangle: ";
	cin >> base;
	cout << "enter the height of triangle: ";
	cin >> height;
	cout << "the area of the triangle is: " << (base*height)/2 <<endl;
}

int main() 
{
	int choice;
	cout << "Enter selection: ";
	cout << "1. Square" << endl;
	cout << "2. Rectangle" << endl;
	cout << "3. Triangle" << endl;
	cout << "4. quit Program" << endl;
	
     while(cin >> choice)
     {

	if (cin >> choice && !(choice < 1 && choice > 4))
{
	
	if (choice == 1)
		areaOfSquare();
	else
		if(choice == 2)
		areaOfRectangle();
		else
			if(choice == 3)
			areaOfTriangle();
//			else
//				if(choice == 4)
				
				
}
	else 
     {
       std::cout << "Error: Invalid input. Please enter an integer." << std::endl;
       std::cin.clear();
       std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
     }
}
}