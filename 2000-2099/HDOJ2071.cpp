#include<iostream>
#include<iomanip>
using namespace std;

void main()
{
    int n,m,i;
    double max;
    double A[101];
    cin>>n;
    while(n--)
    {
        cin>>m;
        for(i=1;i<=m;i++)
        {
            cin>>A[i];
        }

        max=A[1];
        for(i=1;i<=m;i++)
        {
            if(A[i]>max)
            {
                max=A[i];
            }
        }
        cout<<fixed<<setprecision(2)<<max<<endl;
    }
}
