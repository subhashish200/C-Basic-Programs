#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i =0;i<t;i++){
	    int arr[3];
	    int largest,pos=0;
	    for(int j=0;j<3;j++){
	        cin>>arr[i];
	        largest=arr[0];
	        if(arr[i]>largest){
	            largest=arr[i];
	            
	        }
	        pos=i;
	    }
	    cout<<largest<<i<<endl;
	    
	    
	}
	return 0;
}

