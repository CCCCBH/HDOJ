#include<iostream>
using namespace std;

void main()
{
    int A[3];
    int B[3];
    int C[3];
    int n;
    int i;
    cin>>n;
    while(n--)
    {
        for(i=0;i<3;i++)
        {
            cin>>A[i];
        }

        for(i=0;i<3;i++)
        {
            cin>>B[i];
        }
        
        C[0]=A[0]+B[0];
        C[1]=A[1]+B[1];
        C[2]=A[2]+B[2];

        for(i=2;i>=0;i--)
        {
            if(C[i]>=60 && i!=0)
            {
                C[i]=C[i]-60;
                C[i-1]=C[i-1]+1;
            }
        }
        
        for(i=0;i<3;i++)
        {
            if(i==0)
                cout<<C[i];
            else
                cout<<" "<<C[i];
        }
        cout<<endl;
    }
}
