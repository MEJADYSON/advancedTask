#include<iostream>
using namespace std;

int main(){
    int a;
    cout<< "enter a number between 5 and 10: ";
    cin >>a;

    while (a < 5 || a > 10) {
        cout << "sorry, you entered an invalid number. please try again: ";
        cin >>a;
    }
    cout << " your input value is "<<a<<endl;
    return 0;
}