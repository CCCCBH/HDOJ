#include<stdio.h>   
#include<algorithm>  
using namespace std;  
int main()  
{  
    int  i,j,k,n,m;  
    double x[5],y[5],a[5],b[5],s;  
    while(scanf("%lf%lf%lf%lf%lf%lf%lf%lf",&x[1],&y[1],&x[2],&y[2],&x[3],&y[3],&x[4],&y[4])==8)  
    {  
        s=0;  
        for(i=1;i<=4;i++)  
        {  
            a[i]=x[i];  
            b[i]=y[i];  
        }
        sort(x+1,x+5);  
        sort(y+1,y+5);  
        if(x[3]>a[2]&&x[3]>a[1]||x[3]>a[3]&&x[3]>a[4]||y[3]>b[1]&&y[3]>b[2]||y[3]>b[3]&&y[3]>b[4])   
        ;                                                               
        else  
        s=(x[3]-x[2])*(y[3]-y[2]);  
        printf("%.2lf\n",s);  
    }  
      
    return 0;  
} 
