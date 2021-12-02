#include<bits/stdc++.h>
using namespace std;
int frequence(int a[],int n,int x)
{
	int count = 0;
	for(int i=0;i<n;i++)
	{
		if(a[i]==x){
			count++;
		}
	}
	return count;
}
int main()
{
	int a[]={0,5,5,5,4};
	int x=5;
	int n=sizeof(a)/sizeof(a[0]);
	cout<<frequence(a,n,x);
	return 0;
}
