#include<iostream>
using namespace std;
int main()
{
    int i;
    int j;
    while(cin>>i>>j)
    {
        if(i==0&&j==0)
            return 0;
        cout<<i+j<<endl;
    }
    return 0;
}

