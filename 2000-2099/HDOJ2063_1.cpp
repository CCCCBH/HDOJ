#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cmath>
#include<algorithm>
int bond[501][501];
int ingboy[501];
int boy[501];
int m,n;
using namespace std;
int find(int x)
{
    for(int i=1;i<=n;i++)//枚举每个男生
    {
        if(!ingboy[i]&&bond[x][i]==1)//如果该男生没有正在进行匹配且和该女生有暧昧关系
        {
            ingboy[i]=1;//标志该男生正在和女生进行匹配
            if(boy[i]==-1||find(boy[i]))//该男生还没有对象或者该男生的对象可以找其他男生
            {
                boy[i]=x;//第i个男生找到该女生做对象
                return 1;
            }
        }
    }
    return 0;
}
int main()
{
    int k;
    int a,b;
    int count;
    while(cin>>k,k)
    {
        memset(boy,-1,sizeof(boy));
        memset(bond,0,sizeof(bond));
        count=0;
        cin>>m>>n;//m是女生的数目，n是男生的数目
        while(k--)
        {
            cin>>a>>b;
            bond[a][b]=1;//建立男生和女生的暧昧关系
        }
        for(int i=1;i<=m;i++)//每个女生一一找对象
        {
            memset(ingboy,0,sizeof(ingboy));//每次都要把正在匹配男生的数组归零
            if(find(i))//返回1的话就是匹配成功
                count++;
        }
        cout<<count<<endl;//输出最终的结果
    }
    return 0;
}
