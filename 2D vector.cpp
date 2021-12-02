#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	vector<vector<int>> v={
		{1,2,3},
		{2,3,5,8},
		{2,7,9},
		{5,8,7,9}	
	};
	for(int i = ;i<v.size();i++){
		for(int p:v[i]){
			cout<<p[i];
		}
		cou<<endl;
	}
	return 0;
	
}
