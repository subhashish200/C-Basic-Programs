#include <iostream>
#include <cmath>
using namespace std;
int squre_root(int A)
{
    return floor(sqrt(A));
}

int main()
{
	int A;
	int R;
	cin>> A;
	R=squre_root(A);
	cout<<R;
	return 0;

}
