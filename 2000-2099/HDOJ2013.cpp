#include<iostream>
using namespace std;


void main()
{
    int n;
    while(cin>>n)
    {

        int num=1;
        for(int i=1;i<n;i++)
        {
            num=(num+1)*2;
        }
        cout<<num<<endl;
    }
}

