#include<iostream>  
using namespace std;  

void main()
{
    int n;
    int M;
    cin>>n;
    int A[100];
    while(n--)
    {
        cin>>M;
        A[1]=0;
        A[2]=1;
        A[3]=2;
        for(int i=4;i<=M;i++)
        {
            A[i]=A[i-1]+A[i-2];
        }
        cout<<A[M]<<endl;;
    }
}
