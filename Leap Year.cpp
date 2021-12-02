#include<iostream>
using namespace std;
int main()
{
    int long year;
    cin>> year;
    if((year%4)==0&&(year%100)!=0||(year%400)==0)
        cout<<"year is leap year";
    else
        cout<<"Year is common";
    return 0;
}
