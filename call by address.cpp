#include<iostream>
using namespace std;
int swap(int *a,int *b)
{
	int *c;
	c=a;
	a=b;
	b=c;

}
int main()
{
	int a=3,b=5;
	swap(&a,&b);
	cout<<a<<" "<<b;
	return 0;
}
