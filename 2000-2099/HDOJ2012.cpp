#include<math.h>
#include<iostream>
using namespace std;


int main()
{
    int x;
    int y;
    while(cin>>x>>y)
    {
        if(x==0 && y==0)
            return 0;
        int k=0;
        for(int i=x;i<=y;i++)
        {
            
            int num=pow(i,2)+i+41;

            for(int j=2;j<num;j++)
            {
                if(num%j==0)
                    k++;
            }
        }
        if(k==0)
            cout<<"OK"<<endl;
        else
            cout<<"Sorry"<<endl;
    }
    return 0;
}

