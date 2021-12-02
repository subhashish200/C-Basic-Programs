#include<iostream>
using namespace std;
long int fact(int x)         
{
	int i, f=1;
	if(x==0||x==1){
		return f;
	
	}
	else{
		for(i=2; i<=x; i++)
	    {
	    	f=f*i;
		
	    }
	}
	return f;
}
int permute(int n,int r)
{
	long int npr=fact(n)/fact(n-r);    
	return npr;
}
int  combination(int n,int r)
{
	long int  npr=permute(n,r);
	long int ncr=npr/fact(r);
	return ncr;
}
int main()
{
	int n,r;
	cout<<"Enter the value of row:"<<endl;
	cin>>n;
	//cin>>r;
	//cout<<permute(n,r)<<endl;
	//cout<<combination(n,r)<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cout<<combination(i,j)<<" ";
			
		}
		cout<<endl;
	}
	return 0;
}
