#include<iostream>
using namespace std;

void main()
{
    int score;
    while(cin>>score)
    {
        int n=score/10;
        if(score>100||score<0)
            n = -1;
        switch(n)
        {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            cout<<"E"<<endl;
            break;
        case 6:
            cout<<"D"<<endl;
            break;
        case 7:
            cout<<"C"<<endl;
            break;
        case 8:
            cout<<"B"<<endl;
            break;
        case 9:
        case 10:
            cout<<"A"<<endl;
            break;
        default:
            cout<<"Score is error!"<<endl;
        }
    }
}
