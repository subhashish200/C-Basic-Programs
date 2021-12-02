#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool compare(int a,int b){ // 2 will go 'b'  , 1 will go 'a' .....
	return a>b; // 1<2 
	
}
int main()
{
	
	//vector<int> vec(n);
	/*for(int i=0;i<n;i++){
		int no;
		cin>>no;
		vec.push_back(no);
		
	}*/
	vector<int>vec;
	vec.push_back(2);
	vec.push_back(1);
	vec.push_back(3);
	vec.push_back(1);
	vec.push_back(4);
	
	sort(vec.begin(),vec.end(),compare);
	for(int i=0;i<vec.size();i++){
		cout<<vec[i];
	}
	
	return 0;
	
}
