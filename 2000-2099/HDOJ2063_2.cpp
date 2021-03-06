#include<iostream>
using namespace std;

int book[500],match[500];
int e[500][500];
int m,n;

int dfs(int u)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(book[i]==0 && e[u][i]==1)
        {
            book[i]=1;
            if(match[i]==-1 || dfs(match[i]))
            {
                match[i]=u;
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    int k,i,j,sum;
    while(cin>>k,k)
    {
        sum=0;
        cin>>m>>n;
        memset(e,0,sizeof(e));
        memset(match,-1,sizeof(match));
        while(k--)
        {
            cin>>i>>j;
            e[i-1][j-1]=1;
        }
        
        for(i=0;i<m;i++)
        {
            memset(book,0,sizeof(book));
            if(dfs(i))
            {
                sum++;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}

