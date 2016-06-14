#include<math.h>
#include<iomanip>
#include<iostream>
using namespace std;

void count(int num)
{
    double sum=1;
    for(int i=2;i<=num;i++)
    {
        sum=sum+pow(-1,i+1)*(1.0/i);
    }
    cout<<setprecision(2)<<std::fixed<<sum<<endl;
}

void main()
{
    int n;
    cin>>n;
    int num;
    for(int i=0;i<n;i++)
    {
        cin>>num;
        count(num);
        
    }
}

