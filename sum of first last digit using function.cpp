#include<iostream>
#include<stdio.h>
using namespace std;
int sumOfLastFirst(int n)
{
	int lastdigit,firstdigit;
	lastdigit=n%10;
	while(n>=10)
	{
		n=n/10;
		firstdigit=n;
	}
	int sum=firstdigit+lastdigit;
	return sum;
	
}
int main()
{
	long int num;
	cin>>num;
	cout<<"Sum of the last and first digit:"<<sumOfLastFirst(num);
	return 0;
}
