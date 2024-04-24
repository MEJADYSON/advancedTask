#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
int main(){
    srand(time(0));
    int daysUntilExpiration = rand() % 12;
    
    switch(daysUntilExpiration){
        case 0:
             cout<<"Your subscription has expired" << endl;
           break;
        case 1:
            cout<<"Your subscription expires within a day!"<<endl;
            cout<<"Renew now and save 20%! ";
            break;
    
        case 2:
            cout<<"Your subscription expires in " <<" " <<daysUntilExpiration <<" days" <<endl;
            cout<<"renew now and save 10%";
            break;
            
       case 3:
             cout<<"your subscription will expire soon. renew now!";
             break;
       default:
            cout<<"You have an active subscription";          
    }
    return 0;

}
