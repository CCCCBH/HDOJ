#include<iostream>
using namespace std;
void main()
{
    int i;
    int n;
    int m;
    int num;

    cin>>m;
    while(m>0)
    {
        cin>>n;
        int sum=0;
        for(i=0;i<n;i++)
        {
            cin>>num;
            sum=sum+num;
        }
        cout<<sum<<endl;
        if(m>1)
            cout<<endl;
        m--;
    }  
}
