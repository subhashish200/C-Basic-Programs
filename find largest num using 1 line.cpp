#include<iostream>
using namespace std;
int main()
{
	int a,b,c,max;
	cin>>a;
	cin>>b;
	cin>>c;
	max=((a>b)&&(a>c))? a :((b>a)&&(b>c))? b : c;
	cout<<max;
	return 0;
}
