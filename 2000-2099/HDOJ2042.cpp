#include<iostream>  
using namespace std;  

void main()
{
    int n;
    int a;
    cin>>n;
    while(n--)
    {
        cin>>a;
        int sum=3;
        for(int i=0;i<a;i++)
        {
            sum=(sum-1)*2;
        }
        cout<<sum<<endl;
    }
}
