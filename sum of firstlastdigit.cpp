#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    
	    long int n;
	    int lastdigit,firstdigit;
	    lastdigit=n%10;
	    while(n>=10)
	    {
	     	n=n/10;
		    firstdigit=n;
	    }
	    int sum = firstdigit + lastdigit;
	    cout<<sum<<endl;

	 
	
	}
	
	return 0;
}

