#include<iostream>
#include<stdio.h>
using namespace std;

int B[100000];
int main(void)
{
    int i,j,a,b;
    while(cin>>a>>b && (a!=0 || b!=0))
    {
        j=0;
        for(i=0;i<100;i++)
        {
            if((a*100+i)%b==0)
            {
                B[j]=i;
                j++;
            }
        }
        
        for(i=0;i<j;i++)
        {
            if(i==0)
            {
                printf("%02d", B[i]); 
            }
            else
            {
                printf(" %02d", B[i]); 
            }
        }
        cout<<endl;
    }
}
