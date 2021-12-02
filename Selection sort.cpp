#include<iostream>
using namespace std;
int main()
{
	int a[100],n,l,c,pos;
	int i,j;
	cout<<"Enter the value of n"<<endl;
	cin>>n;
	for(j=0;j<n;j++)
	{
		cin>>a[j];
    }
	for(j=0;j<n;j++)
	{
		
		l=a[j];
		int pos=j;
		for(i=j+1;i<n;i++)
		{
			if(a[i]<l)
			{
				l=a[i];
				pos=i;
			}
		}
		c=a[j];
		a[j]=a[pos];
		a[pos]=c;
		
		
	}
	for(j=0;j<n;j++){
		cout<<a[j];
	}
	
	
	
	return 0;
}
