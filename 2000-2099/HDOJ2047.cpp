#include<iostream>  
using namespace std;  
void main()
{
    _int64 A[100];
    int k;
    while(cin>>k)
    {
        A[1]=3;
        A[2]=8;

        for(int i=3;i<=k;i++)
        {
            A[i]=2*(A[i-1]+A[i-2]);
        }
        printf("%I64d",A[k]);//cout没有对_int64重载 输出只能用printf
        cout<<endl;
    }
}

