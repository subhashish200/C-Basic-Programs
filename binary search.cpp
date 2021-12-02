#include<bits/stdc++.h>
using namespace std;
int temp=-1;
int binary_search_low(vector <int> &a, int low, int high, int x)
{
   // cout<<low<<" "<<high<<endl;
    if (low>high)
        return temp;
    else
    {
        int mid=(low+high)/2;
        if (a[mid]==x)
            temp=mid;
        if (a[mid]>=x)          // left side
            return binary_search_low(a,low, mid-1, x);
        else
            return binary_search_low(a,mid+1,high,x);
    }
}
int main()
{
    /*vector <int> a={1,2,3,4,5,6,7,8,9,10};
    int n=a.size();     // not possible in array
    int x=12;
    cout<<binary_search_low(a,0,n-1,x);        // error
    */
    vector <int> a={5, 7, 7, 8, 8, 10};
    int n=a.size();
    int x=8;
    cout<<binary_search_low(a,0,n-1,x);
    return 0;
}
