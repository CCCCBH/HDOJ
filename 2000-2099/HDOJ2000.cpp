#include<iostream>
using namespace std;
void main()
{
    char a;
    char b;
    char c;
    char min;
    char max;
    while(cin>>a>>b>>c)
    {
        max=(a>b?a:b)>c?(a>b?a:b):c;
        min=(a<b?a:b)<c?(a<b?a:b):c;
        //强制类型转换为char
        cout<<min<<" "<<(char)(a+b+c-max-min)<<" "<<max<<endl;
    }
}
