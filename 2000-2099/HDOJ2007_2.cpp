#include<iostream>
using namespace std;



void count(int i,int j)
{
    int sum1=0;
    int sum2=0;
    for(i;i<=j;i++)
    {
        if(i%2==0)
        {
            sum1=sum1+i*i;
        }
        if(i%2!=0)
        {
            sum2=sum2+i*i*i;
        }
    }
    cout<<sum1<<" "<<sum2<<endl;
}
void main()
{
    int i;
    int j;
    while(cin>>i>>j)
    {
        if(i<j)
        {
            count(i,j);
        }
        else
        {
            count(j,i);
        }
        
    }
}

