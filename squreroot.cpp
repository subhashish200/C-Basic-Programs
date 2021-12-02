#include<stdio.h>
#include<math.h>
int squareroot(int A) {
    return floor(sqrt(A));
}
int main()
{
    int A,R;
    scanf("%d",&A);
    R=squareroot(A);
    return 0;
    
}
