#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector <int> myVector;
	myVector.push_back(5);
	cout<<"vector:"<<endl;
	
	for(int v : myVector){
		 cout<< v<<endl;
	}
	return 0;
}
