#include<iostream>
using namespace std;

void main()
{
    char A[100];
    int i;    
    while(cin.getline(A,100))
    {
        int length=strlen(A);
        int max=A[0];
        for(i=0;i<length;i++)
        {
            if(A[i]>max)
            {
                max=A[i];
            }
        }

        for(i=0;i<length;i++)
        {
            cout<<A[i];
            if(A[i]==max)
            {
                cout<<"(max)";
            }
        }
        cout<<endl;
    }
}
