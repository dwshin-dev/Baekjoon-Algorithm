#include <iostream>
#include <algorithm>
using namespace std;
int dp[100001][4] = { 0, };

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	dp[1][1] = dp[2][2] = 1;
	dp[3][1] = dp[3][2] = dp[3][3] = 1;

	for (int i = 4; i < 100001; i++)
	{
		dp[i][1] = (dp[i - 1][2] + dp[i - 1][3]) % 1000000009;
		dp[i][2] = (dp[i - 2][1] + dp[i - 2][3]) % 1000000009;
		dp[i][3] = (dp[i - 3][1] + dp[i - 3][2]) % 1000000009;
	}

	int t;
	cin >> t;

	for (int test_case = 1;test_case <= t; test_case++) {
		int n;
		cin >> n;

		cout << ((long long)dp[n][1] + dp[n][2] + dp[n][3]) % 1000000009 << "\n";
	}

	return 0;
}