#include<iostream>  
using namespace std;  
//数论知识
void main()
{
    int A;
    int B;
    while(cin>>A>>B && (A!=0 && B!=0))
    {
        int sum=1;
        for(int i=0;i<B;i++)
        {
            sum=sum*A%1000;//输出A^B最后三位表示的整数 即除1000取余
        }
        cout<<sum<<endl;
    }
}
