#include<iostream>
#include<cstring>
using namespace std;

int min(int a, int b)
{
    return a < b ? a : b;
}

int main(void)
{
    int n, i, j, k;
    int A[30], dp[30][60];
    cin >> n;
    while (n--)
    {
        memset(dp, 0, sizeof(dp));

        for (i = 1; i <= 26; i++)
        {
            cin >> A[i];
        }

        for (i = 0; i <= 26; i++)
        {
            dp[i][0] = 1;
        }

        for (i = 1; i <= 26; i++)
        {
            for (j = 1; j <= 50; j++)
            {
                for (k = 0; k <= A[i] && k * i <= j; k++)
                {
                    dp[i][j] = dp[i][j] + dp[i - 1][j - k * i];
                }
            }
        }

        int sum = 0;

        for (i = 1; i <= 50; i++)
        {
            sum = sum + dp[26][i];
        }
        cout << sum << endl;
    }
}

