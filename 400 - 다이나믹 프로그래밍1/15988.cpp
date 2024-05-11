#include <iostream>
#include <algorithm>
#define MAX 1000001
#define MODULER 1000000009
using namespace std;
long long dp[MAX] = { 0, };

int main(int argc, char* argv[])
{
    int test_case;
    cin >> test_case;

    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    dp[4] = 7;

    for (int i = 5;i < MAX;i++) {
        dp[i] = (dp[i - 1] + dp[i - 2] + dp[i - 3]) % MODULER;
    }

    for (int T = 1;T <= test_case;T++) {
        int n;
        cin >> n;
        cout << dp[n] << '\n';
    }

    return 0;
}