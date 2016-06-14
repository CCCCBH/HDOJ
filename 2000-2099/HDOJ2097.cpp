#include<iostream>
using namespace std;

int fun(int m,int x)
{
    int sum=0;
    while(m)
    {
        sum=sum+m%x;
        m=m/x;
    }
    return sum;
}

int main(void)
{
    int n,sum1,sum2,sum3;
    while(cin>>n && n!=0)
    {
        sum1=fun(n,10);
        sum2=fun(n,12);
        sum3=fun(n,16);

        if(sum1==sum2 && sum2==sum3)
        {
            cout<<n<<" is a Sky Number."<<endl;
        }
        else
        {
            cout<<n<<" is not a Sky Number."<<endl;
        }
    }

}
