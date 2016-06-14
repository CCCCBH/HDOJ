#include<iostream>
#include<sstream>// istringstream的头文件 
#include<string>//string的头文件 

using namespace std;

int main(void)
{
    string line;
    string A[10000],word[10000];
    
    while(getline(cin,line) && line!="#")
    {
        int i=0,j=0,n=0,sum=0;
        istringstream a(line);//将line（字符串包含多个单词）拆分成word（单独的单词）
        while(a>>word[i])
        {
            int temp1=0,temp2=0;
            for(j=0;j<=n;j++)
            {
                if(word[i]!=A[j])
                {
                    temp1++;
                }
            }
            if(temp1==n+1)
            {
                sum++;
                A[n]=word[i];
                n++;
            }
            i++;
        }
        cout<<sum<<endl;
    }
}
