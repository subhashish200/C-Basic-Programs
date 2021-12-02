#include<iostream>
using namespace std;
int *check(int,int);
int main()
{
	int *c;
	c=check(10,10);
	cout<<c;
	
}
int *check(int i,int j)
{
	int *p,*q;
	p=&i;
	q=&j;
	if(i>=45){
		return p;
	}else{
		return q;
	}
}
