#include<iostream>
using namespace std;

void main()
{
    int A[100][100];
    int m;
    int n;
    int i;
    int j;
    while(cin>>m>>n)
    {
        int max=0;
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                cin>>A[i][j];
                if(abs(A[i][j])>max)
                {
                    max=abs(A[i][j]);
                }
            }
        }

        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(abs(A[i][j])==max)
                {
                    cout<<i+1<<" "<<j+1<<" "<<A[i][j]<<endl;
                    goto exit;
                }
            }
        }exit:;
    }
}
