#include<iostream>
using namespace std;
int main()
{
 int a,b,c;
 cin>>a;
 cin>>b;
 cin>>c;
 if((a+b)>=c ||(b+c)>=a ||(a+c)>=b)
    cout<<"Traingle is valid";
 else
    cout<<"Traingle is not valid";
 return 0;

}

