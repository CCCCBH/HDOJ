#include<math.h>
#include<iomanip>
#include<iostream>
using namespace std;

#define PI 3.1415927

void main()
{
    double radius;
    while(cin>>radius)
    {
        cout<<setprecision(3)<<std::fixed<<(4.0/3.0)*PI*radius*radius*radius<<endl;
    }
}
