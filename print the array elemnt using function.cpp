#include<iostream>
using namespace std;
void printArray(int arr[],int count)
{
	cout<<"array element are:"<<endl;
	for(int i=0;i<count;i++){
		cout<<arr[i]<<endl;
	}
}


int main()
{
	int arr[10]={12,13,14,15,16,17,18,19,20};
	int count;
	cin>>count;
	printArray(arr,count);
	
}

