#include <iostream>
#include <algorithm>
using namespace std;
long long dp[91][2] = { 0, };

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	dp[1][1] = 1;
	dp[2][0] = 1;

	int n;
	cin >> n;

	for (int i = 3;i <= n;i++) {
		dp[i][0] = dp[i - 1][0] + dp[i - 1][1];
		dp[i][1] = dp[i - 1][0];
	}


	cout << dp[n][0] + dp[n][1] << "\n";

	return 0;
}