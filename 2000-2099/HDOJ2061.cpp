#include<iomanip>
#include<iostream>  
using namespace std;

void main()
{
    int n;
    int m;
    cin>>n;
    char course_name[255];
    double credit;
    double score;
    
    while(n--)
    {
        double sum_score=0;
        double sum_credit=0;
        int flag=0;
        cin>>m;
        while(m--)
        {
            cin>>course_name>>credit>>score;
            if(score<60)
            {
                flag=1;
            }
            else
            {
                sum_score=sum_score+score*credit;
                sum_credit=sum_credit+credit;
            }
            
        }
        double GAP=sum_score/sum_credit;
        if(flag==1)
        {
            cout<<"Sorry!"<<endl;
        }
        else
        {
            cout<<fixed<<setprecision(2)<<GAP<<endl;
        }
        if(n>0)
        {
            cout<<endl;
        }
    
    }
}

