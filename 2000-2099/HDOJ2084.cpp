#include<iostream>
using namespace std;

int A[1000][1000];

int max(int a,int b)
{
    return a>b?a:b;
}

int main(void)
{
    int c,n,i,j;
    
    cin>>c;
    while(c--)
    {
        cin>>n;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=i;j++)
            {
                cin>>A[i][j];
            }
        }
        
        for(i=n;i>1;i--)
        {
            for(j=1;j<i;j++)
            {
                A[i-1][j]=A[i-1][j]+max(A[i][j],A[i][j+1]);
            }
        }
        
        cout<<A[1][1]<<endl;
    }
}
