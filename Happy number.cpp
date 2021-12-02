#include<iostream>
using namespace std;
int calculate(int n)
{
	int r=0,sum=0;
	if(n==1){
		return 1;
	}
	while(n>0)
	{
		r=n%10;
		sum=sum+(r*r);
		n=n/10;
	}
	cout<<sum<<endl;
	return sum;
}
int solve(int n)
{
	int new_n = n;
	new_n = calculate(new_n);
	    if(new_n==1){
	    	return 1;
		}
		else if(new_n==n){
			
			return 0;
     	}
     	int x=new_n;
     	
	while(new_n != 1 ){
		new_n = calculate(new_n);
		if(new_n==1){
			return 1;
		}
		else if(new_n==x||new_n<10){
			
			return 0;
			
		}
		
	}
	
	if(new_n==1){
		cout<<n<<" "<<"is a happy";
		
	}
	else{
		cout<< n<<" "<<"is not a happy";
	}
	return 0;
}
int main()
{
	int n;
	cout<<"Enter the number";
	cin>>n;
	int x=solve(n);
	if(x==1){
		cout<<"happy";
		
	}
	else
	{
		cout<<"unhappy";
	}
	return 0;
}
