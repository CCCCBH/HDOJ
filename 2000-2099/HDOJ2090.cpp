#include<iostream>
#include<iomanip>
using namespace std;

int main(void)
{
    char a[100];
    double b,c,sum;
    while(cin>>a>>b>>c)
    {
        sum=sum+b*c;
    }
    cout<<fixed<<setprecision(1)<<sum<<endl;
}
