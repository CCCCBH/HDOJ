#include<iostream>
#include<iomanip>
using namespace std;

int x[1000];
int y[1000];
void main()
{
    int n,i;
    double s;
    while(cin>>n && n!=0)
    {
        int temp=0;
        for(i=1;i<=n;i++)
        {
            cin>>x[i]>>y[i];
        }

        for(i=1;i<=n;i++)
        {
            if(i<n)
            {
                temp=temp+x[i]*y[i+1]-y[i]*x[i+1];
            }
            else
            {
                temp=temp+x[i]*y[1]-y[i]*x[1];
            }
        }
        s=0.5*abs(temp);
        cout<<fixed<<setprecision(1)<<s<<endl;
    }    
}
