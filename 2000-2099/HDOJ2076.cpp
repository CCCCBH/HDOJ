#include<iostream>
#include<cmath>
using namespace std;

int main(void)
{
    int n;
    double a,b,c,d,e,f;
    cin>>n;
    while(n--)
    {
        cin>>a>>b>>c;
        if(a>12)
        {
            a=a-12;
        }
        d=(b*6.0+c*6.0/60.0);
        e=(a*30.0+b/60.0*30.0+c/3600.0*30.0);
        f=fabs((e-d));
        if(f>180)
        {
            cout<<(int)(360-f)<<endl;
        }
        else
        {
            cout<<(int)f<<endl;
        }
    }
}
