#include<iostream>
#include<vector>
using namespace std;

/*
int main()
{
	vector <int> d{1,2,3,4,5,6};
	for(int i=0;i<d.size();i++){
		cout<<d[i]<<" ";
	}
	return 0;
}*/

/*
int main()
{
	vector <int> d{1,2,3,4,5};
	for(auto i=d.begin();i!=d.end();i++){
		cout<<(*i)<<" ,";
	}
}
int main()
{
	vector <int> d{4,5,6,7};
	for(int x:d){
		cout<<x<<" ";
	}
	return 0;
}*/
int main()
{
	vector<int> v;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int no;
		cin>>no;
		v.push_back(no);
		v.pop_back();
	}
	for(int i=0;i<n;i++){
		cout<<v[i]<<endl;
	}
	cout<<v.size()<<endl;
	cout<<v.capacity()<<endl;
	cout<<v.max_size()<<endl;
	return 0;
}

