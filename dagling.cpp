#include<iostream>
using namespace std;
void junk(int i,int *j)
{
	i=i*i;
	*j=j * *j;
}

int main()
{
	int i=-5,j=-2;
	junk(i,&j);
	cout<<i<<" "<<j;
	
}
