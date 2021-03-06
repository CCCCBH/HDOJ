#include<iostream>
using namespace std;

int GCD(_int64 a,_int64 b)
{
    if(a%b==0)
    {
        return b;
    }
    else
        return GCD(b,a%b);
}

int LCM(_int64 a,_int64 b)
{
    int temp;
    temp = a*b/GCD(a,b);
    return temp;
}

void main()
{
    int n;
    int i;
    _int64 A[100];
    while(cin>>n)
    {
        for(i=0;i<n;i++)
        {
            cin>>A[i];
        }

        for(i=1;i<n;i++)
        {
            if(A[i-1]<A[i])
            {
                swap(A[i-1],A[i]);
            }
            A[i]=LCM(A[i-1],A[i]);
        }
        cout<<A[n-1]<<endl;
    }
}
