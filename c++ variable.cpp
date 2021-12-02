#include<iostream>
#include <iomanip> 
using namespace std;

int main()  {
    int i;
    long l;
    char c;
    float f;
    double d;
    cin>>i;
    cin>>l;
    cin>>c;
    cin>>f;
    cin>>d;
    cout<<i<<endl;
    cout<<l<<endl;
    cout<<c<<endl;
    cout<<std::fixed<<std::setprecision(3)<<f<<endl;
    cout<<std::fixed<<std::setprecision(9)<<d<<endl;
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output
    
    return 0;
}
