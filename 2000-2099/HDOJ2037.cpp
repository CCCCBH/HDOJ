#include<iostream>
using namespace std;

struct TV
{
    int a;
    int b;
};


void main()
{
    struct TV tv[100];
    struct TV temp;
    int n,i,j,t,sum;

    while(cin>>n && n!=0)
    {
        for(i=1;i<=n;i++)
        {
            cin>>tv[i].a;
            cin>>tv[i].b;
        }

        for(i=1;i<=n;i++)
        {
            for(j=1;j<n;j++)
            {
                if(tv[j].b > tv[j+1].b)
                {
                    temp = tv[j];
                    tv[j] = tv[j+1];
                    tv[j+1] = temp;
                }
            }
        }

        t=0;
        sum=0;

        for(i=1;i<=n;i++)
        {
            if(t <= tv[i].a)
            {
                sum++;
                t=tv[i].b;
            }
        }

        cout<<sum<<endl;
    }
}
