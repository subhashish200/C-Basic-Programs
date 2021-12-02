#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class car{
	public:
		string name;
	    int x,y;
	    car(){
	    	
		}
		car(string name,int x, int y){
			this->name = name;
			this->x = x;
			this->y= y;
		}
		int dist(){
			return x*x + y*y;
		}
	
};
bool compare(car A, car B){
	int da = A.dist();
	int db = B.dist();
	
	/*if (da == db){
		return A.length() < B.length();
	}*/
	return da<db;
}
int main()
{
	int n;
	cin>>n;
	vector<car> v;
	for(int i=0;i<n;i++){
		int x,y;
		string name;
		cin>>name>>x>>y;
		car temp (name,x,y);
		v.push_back(temp);
	}
	sort(v.begin(),v.end(),compare);
	for(auto p:v){
		cout<<"car"<<p.name<<"distance"<<p.dist()<<"location"<<p.x<<p.y<<endl;
		
	}
	return 0;
	
}

