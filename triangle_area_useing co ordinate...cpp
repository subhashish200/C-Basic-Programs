#include<iostream>
#include<cmath>
using namespace std;
float traingle_Area(int x1,int x2,int x3,int y1,int y2,int y3)
{
	float res = 0.5*(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
	if(res<0)
	{
		return (-1)*res;
	}
	else
	{
		return res;
	}
}

int main()
{
	int x1,x2,x3,y1,y2,y3;
	cin>>x1;
	cin>>x2;
	cin>>x3;
	cin>>y1;
	cin>>y2;
	cin>>y3;
	
	cout<<"Area of traingle is:"<<traingle_Area(x1,x2,x3,y1,y2,y3)<<"\n";
	return 0;
	
	
}

