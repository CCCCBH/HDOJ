#include<iostream>
using namespace std;

void main()
{
    int n;
    cin>>n;
    int N;
    int M;
    int i;
    _int64 A[100];
    _int64 B[100];
    while(n--)
    {
        cin>>N;
        cin>>M;
        A[1]=0;
        A[2]=1;
        A[3]=2;
        for(i=4;i<=M;i++)
        {
            A[i]=(i-1)*(A[i-1]+A[i-2]);
        }

        B[0]=1;
        for(i=1;i<=N;i++)
        {
            B[i]=B[i-1]*i;
        }

        printf("%I64d\n",A[M]*(B[N]/(B[N-M]*B[M])));
        //cout<<A[M]*(B[N]/(B[N-M]*B[M]))<<endl;
    }
}
