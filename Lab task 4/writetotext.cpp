//writing on a text file
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream myfile("example.txt");
    if (myfile.is_open()){
        myfile<< "This is a line.\n"<<endl;
        myfile<< "this is another line.\n";
        myfile.close();

    }
    else{
        cout<< "unable to open file";
    }
    return 0;
}


