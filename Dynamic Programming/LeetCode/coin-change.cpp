#include<iostream>
using namespace std;

int main()
{
    int coins[] = {1,2,5};
    int amount = 11;
    int coins_size = sizeof(coins)/sizeof(coins[0]);
    int dp[coins_size + 1][amount + 1] = {0};

    for(int i = 0; i < coins_size; i++)
    {
        for(int j = 0; j <= amount; j++)
        {
            if(i == 0 && j != 0)
                dp[i][j] = amount + 1;
            
            if(coins[i-1] > j)
                dp[i][j] = dp[i - 1][j];
            else
                dp[i][j] = 1 + dp[i][j - coins[i-1]];
        }
    }

    cout << dp[0][0];

    return 0;
}