#include<iostream>
using namespace std;
void findAbsolute(int n)
{
    if(n<0)
    {
        n=n*(-1);
        cout<<n;
    }

}
int main()
{
    int num;
    cin>>num;
    findAbsolute(num);
    return 0;
}
