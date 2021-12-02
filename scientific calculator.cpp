#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;

int sum(int a,int b)
{
	return a+b;
}
int subtraction(int a,int b)
{
	return a-b;
}
int mul(int a,int b)
{
	return a*b;
}
float div(int a,int b)
{
	return a/b;
}
int mod(int a,int b)
{
	return a%b;
}
float logi(int n)
{
	return log(n); 
}
float power(int a,int b)
{
	return pow(a,b);
}
float squareRoot(int num)
{
	return sqrt(num);
}
float Trigonometric(float p)
{
	int x;
	cout<<"Enter your choice";
	cin>>x;
	switch(x)
	{
		case 1:
			return sin(p);
			break;
		case 2:
			return cos(p);
			break;
		case 3:
			return tan(p);
			break;
		case 4:
			return cos(p)/sin(p);
			break;
		case 5:
			return 1/sin(p);
			break;
		case 6:
			return 1/cos(p);
			break;
			
		
	}
}
float cube(int n)
{
	return n*n*n;
}
float cuberoot(int n)
{
	return cbrt(n);
}
long int fact(int x)         
{
	int i, f=1;
	for(i=2; i<=x; i++)
	{
		f=f*i;
	}
	return f;
}
float permute(int n,int r)
{
	float npr=fact(n)/fact(n-r);    
	return npr;
}
float combination(int n,int r)
{
	float npr=fact(n)/fact(n-r);
	float ncr=npr/fact(r);
	return ncr;
}


	


int main()
{
	int c,a,n,b,num,r;
	float p;
	cout<<"Enter your choice:";
	cin>>c;
	switch(c)
	{
		case 1:
			cin>>a;
	        cin>>b;
			cout<<"sum of two number:"<<sum(a,b)<<"\n";
			break;
			
		case 2:
			cin>>a;
	        cin>>b;
			cout<<"subtraction of two number:"<<subtraction(a,b)<<"\n";
			break;
			
		case 3:
			cin>>a;
	        cin>>b;
			cout<<"multiplication of two number:"<<mul(a,b)<<"\n";
			break;
			
	    case 4:
	    	cin>>a;
	        cin>>b;
			cout<<"division of two number:"<<div(a,b)<<"\n";
			break;
			
		case 5:
			cin>>a;
	        cin>>b;
			cout<<"reminder of two number:"<<mod(a,b)<<"\n";
			break;
			
		case 6:
			cin>>n;
			cout<<"log of the number"<<logi(n)<<"\n";
			break;
			
		case 7:
			cin>>a;
			cin>>b;
			cout<<"Power of a number:"<<power(a,b)<<"\n";
			break;
			
		case 8:
			cin>>num;
			cout<<"square root of a number:"<<squareRoot(num)<<"\n";
			break;
			
		case 9:
			cin>>p;
			cout<<"Trigonometric values are:"<<Trigonometric(p)<<"\n";
			break;
			
		case 10:
			cin>>n;
			cout<<"cube of number:"<<cube(n)<<"\n";
			break;
			
		case 11:
			cin>>n;
			cout<<"cube root of number:"<<cuberoot(n)<<"\n";
			break;
			
		case 12:
			cin>>n;
			cin>>r;
			cout<<"permutation of a number:"<<permute(n,r)<<"\n";
			break;
			
		case 13:
			cin>>n;
			cin>>r;
			cout<<"Combination of a number:"<<combination(n,r)<<"\n";
			break;	
	}
	
	
	return 0;
}
