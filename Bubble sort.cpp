#include<iostream>
using namespace std;
int main()
{
	int a[100],i,j,n,c;
	cout<<"Enter the value of n"<<endl;
	cin>>n;
	for(j=0;j<n;j++)
	{
		cin>>a[j];
    }
	for(j=0;j<n-1;j++)
	{
	
		for(i=0;i<n-1;i++)
		{
			if(a[i]>a[i+1]){
				c=a[i];
				a[i]=a[i+1];
				a[i+1]=c;
				
			}
		}
	}
	for(int j=0;j<n;j++){
		cout<<a[j];
	}
	return 0;
}
