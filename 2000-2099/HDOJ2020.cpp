#include <iostream>
using namespace std;

void main()
{
    int A[100];
    int n;
    int i;
    int j;

    while(cin>>n && n!=0)
    {
        for(i=0;i<n;i++)
        {
            cin>>A[i];
        }

        for(i=n-1;i>=0;i--)
        {
            for(j=0;j<i;j++)
            {
                if(abs(A[j])<abs(A[j+1]))
                    swap(A[j],A[j+1]);
            }
        }

        for(i=0;i<n;i++)
        {
            if(i==0)
                cout<<A[i];
            else
                cout<<" "<<A[i];
        }
        cout<<endl;
    }
}
