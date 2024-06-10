#include <iostream>
using namespace std;

void AreaOfSquare()
{
    int side;
    cout << "enter the side of square: ";
    cin >> side;
    cout << "the area of the square is: " << side * side <<endl;
}
void AreaOfRectangle()
{
    int len, wid;
    cout << "enter the size of length: ";
    cin >> len;
    cout << "enter the size of width: ";
    cin >> wid;
    cout << "the area of the rectangle is: " << len * wid <<endl;
}
void AreaOfTriangle()
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

    do
    {
        cout << "Please select the area of the shape to calculate: "<< endl << "\n";
        cout << "1. SQUARE" << endl;
        cout << "2. RECTANGLE" << endl;
        cout << "3. TRIANGLE" << endl;
        cout << "4. QUIT PROGRAM \n\n";
        cout << "Enter  your selection: ";
        cin >> choice;

        if

                (choice > 0 && choice <5)
        {
            switch(choice)
            {
                case 1:
                    AreaOfSquare();
                    break;
                case 2:
                    AreaOfRectangle();
                    break;
                case 3:
                    AreaOfTriangle();
                    break;


            }
        }
        else if(choice > 0 && choice <5)
        {
            cout << "Your input was " << choice <<" which is an invalid input " <<endl
                 << "Please enter a valid input \n\n";
        }

    }
    while(choice != 4 && (isalpha(choice)));

}

