#include <iostream>
using namespace std;
// Your code goes here
int index_of_largest( int arr_1[],int n)
{
    int i;
   for (int i = 1; i < n; ++i) {
    if (arr_1[0] < arr_1[i]) {
      arr_1[0] = arr_1[i];
    }
  }
  return i;

}
double index_of_largest(double arr_2[], int n)
{
    int i;
   for (int i = 1; i < n; ++i) {
    if (arr_2[0] < arr_2[i]) {
      arr_2[0] = arr_2[i];
    }
  }
  return i;

}
int main()  {
    int n;
    cin>>n;
    int arr_1[n];
    for(int i = 0; i < n; i++){
        cin>>arr_1[i];
    }
    int res = index_of_largest<int>(arr_1[], n);
    cout<<res<<endl;
    
    cin>>n;
    double arr_2[n];
    for(int i = 0; i < n; i++){
        cin>>arr_2[i];
    }
    res = index_of_largest<double>(arr_2[], n);
    cout<<res<<endl;
    return 0;
}


