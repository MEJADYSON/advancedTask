#include <iostream>
#include <string>
using namespace std;
int main() {
    
    string arr[] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};
    int numarr = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < numarr; i++) {
        if (arr[i][0] == 'B') {
            cout << arr[i] <<endl;
        }
    }

    return 0;
}

