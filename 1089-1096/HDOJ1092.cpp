#include<iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int n;
    int num=0;
    while(1)
    {
        cin>>n;
        if(n==0)
            return 0;
        int *A=new int [n];
        for(i=0;i<n;i++)
        {
            cin>>A[i];
        }
        for(i=0;i<n;i++)
        {
            num=num+A[i];
        }
        cout<<num<<endl;
        num=0;
        delete []A;
    }
    return 0;
}

