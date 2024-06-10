#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	int max, daysUntilExpiration;
	max = 11;
	
	srand(time(0));
	daysUntilExpiration = (rand () % max + 1);
	
	if(daysUntilExpiration == 0)
		cout << "Your subscription has expired" <<endl;
	else
		if(daysUntilExpiration == 1)
			cout << "Your subscription expires within a day! " <<endl <<
					"Renew now and save 20%!" << endl;
		else
			if(daysUntilExpiration <= 5)
				cout << "Your subscription expires in "<< 
				daysUntilExpiration << endl <<
				" Renew now and save 10%!" << endl;
			else
				if(daysUntilExpiration <= 10)
					cout << "Your subscription will expire soon. Renew now!" << endl;
				else
					cout << "You have an active subscription." << endl;
}
