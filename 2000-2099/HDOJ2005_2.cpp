#include<iostream>
using namespace std;

void main()
{
    int year;
    int month;
    int day;
    char l;
    int monthday[12]={0,31,59,90,120,151,181,212,243,273,304,334};
    
    while(cin>>year>>l>>month>>l>>day)
    {
        int days=monthday[month-1]+day;
        if(((year%4==0 && year%100!=0)||year%400==0) && month>2)
            days=days+1;
        cout<<days<<endl;
    }
}
