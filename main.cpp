#include <iostream>

using namespace std;

int main()
{
    float hours,paid;
    int dependents;
    cout<<"Enter the number of hours : ";
    cin >>hours;
    cout<<"Enter the Number of dependents : ";
    cin>>dependents;
    if(hours>40){
        hours-=40;
        paid=40*16.78;
        paid+=hours*16.78*1.5;
    }
    else {
        paid=hours*16.78;
    }
    paid-=(25.0/100.0)*paid;
    paid-=10;
    if (dependents>=3){paid+=35;}
    cout<<paid<<"$";
    return 0;
}
