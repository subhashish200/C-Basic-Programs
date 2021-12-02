#include<iostream>
using namespace std;
int  main()
{
	long int num;
    long int r=0;
	cin>>num;
	while(num!=0)
	{
		r = r * 10;
        r = r + num%10;
        num = num/10;
	
	}
	if(r==num)
	{
		cout<<"Number is palindrone";
	}
	else
	{
		cout<<"Number is not palindrone";
	}
	return 0;
}
