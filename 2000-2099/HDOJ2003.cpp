#include<math.h>
#include<iomanip>
#include<iostream>
using namespace std;

void main()
{
    double n;
    while(cin>>n)
    {
            cout<<setprecision(2)<<std::fixed<<fabs(n)<<endl;
    }
}
