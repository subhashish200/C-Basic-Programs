#include<iostream>
#include<algorithm>
using namespace std;
//  Define comparator function...
bool compare(int a,int b)
{
	return a>b;
}
int main(){
	int n, key;
	cin>>n;
	int a[1000];
	for(int i=0;i<n;i++){
		cin>>a[i];
		
	}
	sort(a,a+n,compare); // sort (starting point , ending point,compare function)
	for(int i=0;i<n;i++){
		cout<<a[i]<<",";
	}
}
