#include<iostream>
using namespace std;

void main()
{
    int n,i;
    _int64 A[100];
    while(cin>>n)
    {
        A[1]=2;
        for(i=2;i<=n;i++)
        {
            A[i]=3*A[i-1]+2;
        }
        printf("%I64d\n",A[n]);  
    }
}
