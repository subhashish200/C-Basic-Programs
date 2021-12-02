#include<iostream>
using namespace std;
int main()
{
	int num,originalNum,reminder,result=0;
	cin>>num;
	originalNum=num;
	while(originalNum!=0)
	{
		reminder=num%10;
		result+=reminder*reminder*reminder;
		originalNum/=10;
		
	}
	if(result==originalNum)
	{
		cout<<"Armstrong Number";
	}
	else
	{
		cout<<"Not Armstrong number";
	}
}
