#include<iostream>  
using namespace std;  

void main()
{
    int n;
    cin>>n;
    cin.ignore();
    char A[50];
    while(n--)
    {
        cin.getline(A,50);
        int length=strlen(A);

        int count1=0;
        int count2=0;
        int count3=0;
        int count4=0;

        for(int i=0;i<length;i++)
        {
            if(A[i]>='A' && A[i]<='Z')
            {
                count1=1;
            }
            if(A[i]>='a' && A[i]<='z')
            {
                count2=1;
            }
            if(A[i]>='0' && A[i]<='9')
            {
                count3=1;
            }
            if(A[i]=='~' || A[i]=='!' || A[i]=='@' || A[i]=='#' || A[i]=='$' || A[i]=='%' || A[i]=='^')
            {
                count4=1;
            }
        }
        if((count1+count2+count3+count4 >= 3) && (length>=8 && length<=16))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
