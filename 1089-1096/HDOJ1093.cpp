#include<iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int n;
    int m;
    int num=0;
    cin>>m;
    while(m>0)
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
        m--;
    }
    return 0;
}

