#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
#define PI 3.141592653

int main(void)
{
    int n;
    double x1,x2,y1,y2;
    cin>>n;
    while(n--)
    {
        cin>>x1>>y1>>x2>>y2;

        double A = sqrt(x1*x1+y1*y1);
        double B = sqrt(x2*x2+y2*y2);
        double C = x1*x2+y1*y2;
        double D=C/A/B;
        D=acos(D);
        D=D/PI*180;
        cout<<fixed<<setprecision(2)<<D<<endl;
    }
}
