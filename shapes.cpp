#include<iostream>
using namespace std;
int main(){
    int a;
    cout<< "please select th area of a shapeto calculate:\n";
    cout<< "1.Triangle\n";
    cout<< "2. Rectangle\n";
    cout<< "3. Square\n";
    cout<< "4. quit program\n";
    cin>>a;
    
    switch (a) {
        case 1:  {
            int b, h;
            cout<< "base of the triangle: ";
            cin>> b;
            cout<< "height of the triangle: ";
            cin>> h;
            int result = 0.5 * b * h;
            cout <<"area of the triangle is: " << result << endl;
            break;
        }
        case 2: {
            int l, w;
            cout <<" length of the rectangle: ";
            cin >> l;
            cout << "width of the rectangle: ";
            cin >> w;
            int results = l * w;
            cout << " the area of a rectangle is: " << results <<endl;
            break;
        }

        case 3: {
            int s;
            cout<< "side of the square: ";
            cin>> s;
            int resulti = s * s;
            cout <<"area of the square is: " << resulti << endl;
            break;
        }
        case 4: {
            cout<< "quiting program.\n";
            return 0;
            default:
               cout<<"invalid choice.\n";
               break;
          }    
        }
        return 0;    
     }    