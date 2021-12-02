#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	int i;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int mini = 2000;
	int l,r;
	for(i=0;i<n-1;i++)
	{
		if(mini>abs(a[i]-a[i+1]))
		{
			mini=abs(a[i]-a[i+1]);
			l=i;
			r=i+1;
		}
	}
	if(mini>abs(a[0]-a[n-1]))
	{
		l=0;
		r=n-1;
	}
	cout<<l+1<<" "<<r+1<<endl;
	return 0;
}
