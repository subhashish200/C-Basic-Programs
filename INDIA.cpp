#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
	char A[100];
	gets(A);
	int l=strlen(A);
	for(int i=0;i<l;i++)
	{
		for(int j=0;j<=i;j++)
		{
			cout<<A[j];
		}
		cout<<"\n";
	}
	return 0;
}
/*
S
SU
SUB
SUBH
SUBHA
SUBHAS
SUBHASH
SUBHASHI
SUBHASHIS
SUBHASHISH
*/
