#include<iostream>  
using namespace std;  
void main()
{
    int width;
    int height;
    int i;
    int j;
    while(cin>>width>>height)
    {
        for(i=0;i<=height+1;i++)
        {
            for(j=0;j<=width+1;j++)
            {
                if((i==0 && j==0) || (i==0 && j==width+1) || (i==height+1 && j==0) || (i==height+1 && j==width+1))
                {
                    cout<<"+";
                }
                if((i==0 || i==height+1) && (j!=0 && j!=width+1))
                {
                    cout<<"-";
                }
                if((j==0 || j== width+1) && (i!=0 && i!=height+1))
                {
                    cout<<"|";
                }
                if((i!=0 && i!=height+1) && (j!=0 && j!=width+1))
                {
                    cout<<" ";
                }
            }
            cout<<endl;
        }
        cout<<endl;
    }
}

