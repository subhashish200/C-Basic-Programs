#include<iostream>
using namespace std;
int main()
{
	int N,p,count=0;
	cin>>N;
	int curr[N];
	for(int i=0;i<N;i++)  
	{
		cin>>curr[i];
	}
	cin>>p;
	for(int j=0;j<N;j++)
	{
		for(int k=j;k<N-1;k++)
		{
			if((curr[j]+curr[k])==p)
			{
				count++;
			}
		}
	}
	cout<<count;
	return 0;
}
