#include<iostream>
using namespace std;

int main(void)
{
    int n,A,B,C;
    cin>>n;
    while(n--)
    {
        cin>>A>>B;
        A=A%100;
        B=B%100;
        C=A+B;
        C=C%100;
        cout<<C<<endl;
    }
}
