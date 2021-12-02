#include<iostream>
#include<vector>
using namespace std;

void printVector(vector<int>&data)
{
	int count = data.size();
	cout<<"Value stored are:"<<endl;
	for(int i=0;i<count;i++)
	{
		cout<<data[i]<<endl;
	}
}
void vectorExample()
{
	vector<int>vec;
	for(int i=0;i<10;i++)
	{
		vec.push_back(i);
	}
	printVector(vec);
}
int main()
{
	vectorExample();
}
