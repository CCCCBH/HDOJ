#include<iomanip>
#include<iostream>  
using namespace std;

double max(double a,double b)
{
    return a>b?a:b;
}

double min(double a,double b)
{
    return a<b?a:b;
}

double m1,n1,m2,n2,m3,n3,m4,n4;
double temp;

void main()
{
    while(cin>>m1>>n1>>m2>>n2>>m3>>n3>>m4>>n4)
    {
        if(m1>m2)
        {
            temp=m2;m2=m1;m1=temp;
        }
        if(n1>n2)
        {
            temp=n2;n2=n1;n1=temp;
        }
        if(m3>m4)
        {
            temp=m4;m4=m3;m3=temp;
        }
        if(n3>n4)
        {
            temp=n4;n4=n3;n3=temp;
        }

        double tempx1=max(m1,m3);
        double tempy1=max(n1,n3);
        double tempx2=min(m2,m4);
        double tempy2=min(n2,n4);

        if(tempx1>tempx2||tempy1>tempy2)
        {
            cout<<0.00<<endl;
        }
        else
        {
            cout<<fixed<<setprecision(2)<<(tempx2-tempx1)*(tempy2-tempy1)<<endl;
        }
        
    }
}

