#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
vector<string> strings = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};
	
	for(const auto& str : strings)
	{
		if (str.front() == 'B')
 			{
    		cout << str << endl;
 			}
	}
	
}