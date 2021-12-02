//Ctrl + alt + n to run in cmd
// ctrl + alt + b to run in competitie coding
#include<iostream>
using namespace std;

int main(){
    // cout<<"subhashish"<<endl;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}