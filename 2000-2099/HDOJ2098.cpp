#include<iostream>
#include<cmath>
using namespace std;


int main(void)
{
    int n;
    int A[10000];
    while(cin>>n && n!=0)
    {
        int sum=0,i,j,k=0;

        for(i=2; i<=n; i++)
        {
            int flag=1;
            for(j=2; j<=sqrt(i); j++)
            {
                if(i%j==0)
                {
                    flag=0;
                    break;
                }
            }
 
            if(flag==1)
            {
                A[k]=i;
                k++;
            }
        }

        for(i=0; i<=k; i++)
        {
            for(j=0; j<=k; j++)
            {
                if(A[i]+A[j]==n)
                {
                    sum++;
                }
            }
        }
        cout<<sum/2<<endl;
    }
}
