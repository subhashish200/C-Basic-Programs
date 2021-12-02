#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int N;
	float res=0.0;
	cin>>N;
	for(int i=0;i<=N;i++)
	{
		if(i%2==0)
		{
			res=res+(pow(N,i)/i);
		
		}
	}
	cout<<res;
	return 0;
}
