#include<iostream>
using namespace std;
int main()
{
	long int num;
	int m,sum=0;
	cin>>num;
	while(num>0)
	{
		m=num%10;
		sum=sum+m;
		num=num/10;
	}
	cout<<"sum of the digit is"<<" "<<sum;
	return 0;
}
