#include <iostream>
#include <algorithm>
using namespace std;
int dp[201][201] = { 0, };

int main(int argc, char* argv[])
{
    int n, k;
    cin >> n >> k;

    for (int i = 0;i <= k;i++)
        dp[1][i] = i;

    for (int i = 2;i <= n;i++)
        for (int j = 1;j <= k;j++)
            dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % 1000000000;
    
    cout << dp[n][k];

    return 0;
}