#include<iostream>
using namespace std;

void main()
{
    char A[100];
    while(gets(A))
    {
        int length=strlen(A);
        for(int i=0;i<length;i++)
        {
            if(i==0 || A[i-1]==' ')
            {
                A[i]=A[i]-32;
                cout<<A[i];
            }
            else
            {
                cout<<A[i];
            }
        }
        cout<<endl;
    }    
}
