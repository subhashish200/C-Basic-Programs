#include<iostream>
using namespace std;
int main()
{
	int num;
	cin>>num;
	for(int i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			if(i%2==0)
			{
				cout<<"even factors are:"<<i<<endl;
			}
		}
	}
	return 0;
}
