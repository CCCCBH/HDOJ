#include<iostream>
using namespace std;

void main()
{
    int n;
    int c1,c5,c10,c25,c50;
    while(cin>>n)
    {
        int sum=0;
        for(c50=0;c50*50<=n;c50++)
        {
            for(c25=0;c50*50+c25*25<=n;c25++)
            {
                for(c10=0;c50*50+c25*25+c10*10<=n;c10++)
                {
                    for(c5=0;c50*50+c25*25+c10*10+c5*5<=n;c5++)
                    {
                        for(c1=0;c50*50+c25*25+c10*10+c5*5+c1*1<=n;c1++)
                        {
                            if(c50*50+c25*25+c10*10+c5*5+c1*1==n && c50+c25+c10+c5+c1<=100)
                            {
                                sum++;
                            }
                        }
                    }
                }
            }
        }
        cout<<sum<<endl;
    }
}
