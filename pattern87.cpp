#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=5;i>=1;i--)
    {
        for(j=i;j>=i;j--)// for how many times to print...
        {
            cout<<i;
        }
        cout<<"\n";
    }
    return 0;
}
