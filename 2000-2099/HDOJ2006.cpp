#include<iostream>
using namespace std;

void main()
{
    int n;
    while(cin>>n)
    {
        int num;
        int sum=1;
        for(int i=0;i<n;i++)
        {
            cin>>num;
            if(num%2!=0)
            {
                sum=sum*num;
            }
        }
        cout<<sum<<endl;
    }
}

