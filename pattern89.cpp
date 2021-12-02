#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=5;i>=1;i--)
    {
        for(j=6-i;j>=1;j--)// for how many times to print...
        {
            cout<<i;
        }
        cout<<"\n";
    }
    return 0;
}

