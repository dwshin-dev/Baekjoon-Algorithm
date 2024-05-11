#include <iostream>
#include <algorithm>
#define MAX 100001
#define MODULER 9901
using namespace std;
long long dp[MAX][3] = { 0, };

int main(int argc, char* argv[])
{
    int n;
    cin >> n;
    dp[0][0] = 1;
    dp[0][1] = 1;
    dp[0][2] = 1;
    for (int i = 1;i < n;i++) {
        dp[i][0] = (dp[i - 1][0] + dp[i - 1][1] + dp[i - 1][2]) % MODULER;
        dp[i][1] = (dp[i - 1][0] + dp[i - 1][2]) % MODULER;
        dp[i][2] = (dp[i - 1][0] + dp[i - 1][1]) % MODULER;
    }

    cout << (dp[n - 1][0] + dp[n - 1][1]  + dp[n - 1][2]) % MODULER << '\n';

    return 0;
}