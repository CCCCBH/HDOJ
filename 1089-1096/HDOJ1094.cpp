#include<iostream>
using namespace std;
void main()
{
    int i;
    int n;
    int num;
    
    while(cin>>n)
    {
        int sum=0;
        for(i=0;i<n;i++)
        {
            cin>>num;
            sum=sum+num;
        }
        cout<<sum<<endl;
    }
}

