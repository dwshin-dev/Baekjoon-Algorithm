#include <iostream>
#include <algorithm>
using namespace std;
int dp[101][10] = { 0, };

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	for (int i = 1;i <= 9;i++) {
		dp[1][i] = 1;
	}

	int n;
	cin >> n;

	for (int i = 2;i <= n;i++) {
		for (int j = 0;j <= 9;j++) {
			if (j == 0) {
				dp[i][j] = dp[i - 1][1] % 1000000000;
			}
			else if (j == 9) {
				dp[i][j] = dp[i - 1][8] % 1000000000;
			}
			else {
				dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % 1000000000;
			}
		}
	}

	long long ans = 0;
	for (int i = 0;i < 10;i++) {
		ans = (ans + dp[n][i]) % 1000000000;
	}

	cout << ans << "\n";

	return 0;
}