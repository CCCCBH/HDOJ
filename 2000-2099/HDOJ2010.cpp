#include<iostream>
using namespace std;

void main()
{
    int m;
    int n;
    while(cin>>m>>n)
    {
        int k=0;
        for(int i=m;i<=n;i++)
        {
            int num1=i/100;
            int num2=i/10%10;//int num2=(i%100)/10;
            int num3=i%10;

            if(num1*num1*num1+num2*num2*num2+num3*num3*num3 == i)
            {
                if(k==0)
                    cout<<i;
                else
                    cout<<" "<<i;
                k++;
            }
        }
        if(k==0)
            cout<<"no"<<endl;
        else
            cout<<endl;
    }
}

