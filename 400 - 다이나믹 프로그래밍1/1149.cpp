#include <iostream>
#include <algorithm>
#define MAX 1001
using namespace std;
long long dp[MAX][3] = { 0, };

int main(int argc, char* argv[])
{
    int n;
    int cost[3];
    cin >> n;
    cin >> dp[0][0] >> dp[0][1] >> dp[0][2];
    for (int i = 1;i < n;i++) {
        cin >> cost[0] >> cost[1] >> cost[2];
        dp[i][0] = min(dp[i - 1][1], dp[i - 1][2]) + cost[0];
        dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]) + cost[1];
        dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]) + cost[2];
    }

    cout << min(min(dp[n - 1][0], dp[n - 1][1]), dp[n - 1][2]) << '\n';

    return 0;
}