#include<iostream>
#include<cmath>
using namespace std;
int series_of_square(int n)
{
	int res=0;
	for(int i=2;i<=n;i++)
	{
		if(i%2==0)
		{
			res=res+pow(i,2);
		}
	}
	return res;
}
int main()
{
	int n;
	cin>>n;
	cout<<"Result of series is :"<<series_of_square(n)<<"\n";
	
}
