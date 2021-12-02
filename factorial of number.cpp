#include<iostream>
using namespace std;
int main()
{
	int num,fact=1;
	cin>>num;
	for(int i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	cout<<"factorial of number is:"<<fact<<endl;
	return 0;
}
