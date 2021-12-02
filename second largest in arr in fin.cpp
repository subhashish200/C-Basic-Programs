#include<iostream>
using namespace std;
int secondLargest(int arr[],int size)
{
	int first_largest,second_largest;
	first_largest=arr[0];
	for(int i=0;i<size;i++){
		if(arr[i]>first_largest){
			first_largest=arr[i];
		}
		
	}
	second_largest = arr[1];
	for(int i=0;i<size;i++){
		if(arr[i] != first_largest){
			if(arr[i]>second_largest){
				second_largest=arr[i];
				
				
			}
		}
	}
	cout<<second_largest<<endl;
	

}
int main()
{
	int i,n;
	cout<<"Enter the size of array:"<<endl;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	secondLargest(arr,n);
	//cout<<result<<endl;
	
}
