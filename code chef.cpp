
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,N,A,B;
	int c1=0;
	int c2=0;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    cin>>N;
	    cin>>A;
	    cin>>B;
	    char name[N][15];
	    for(int k=0;k<N;k++)
	    {
	        for(int j=0;j<15;j++)
	        {
	            cin>>name[k][j];
	            
	            if((name[k][0]=='E')||(name[k][0]=='Q')||(name[k][0]=='U')||(name[k][0]=='I')||(name[k][0]=='N')||(name[k][0]=='O')||(name[k][0]=='X'))
	            {
	                c1=c1+A;
	            }
	            else
	            {
	                c2=c2+B;
	            }
	        }
	    }
	    if(c1>c2)
	    {
	        cout<<"SARTHAK"<<endl;
	    }
	    else if(c2>c1)
	    {
	        cout<<"ANURADHA"<<endl;
	    }
	    else
	    {
	        cout<<"DRAW"<<endl;
	    }
	}
	return 0;
}
