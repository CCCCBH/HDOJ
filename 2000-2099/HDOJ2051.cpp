#include<iostream>  
using namespace std;  
void main()
{
    int A[100];
    int k;
    while(cin>>k)
    {
        int i=0;
        A[i]=k%2;
        int temp=k;
        while(temp>=2)
        {
            temp=temp/2;
            A[++i]=temp%2;
        }

        for(int j=i;j>=0;j--)
        {
            cout<<A[j];
        }
        cout<<endl;
    }
}

