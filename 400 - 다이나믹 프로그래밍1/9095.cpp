#include <iostream>
using namespace std;

int dp[1001] = { 0 };

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	for (int test_case = 1; test_case <= t;test_case++) {

		int n;
		cin >> n;

		dp[1] = 1;
		dp[2] = 2;
		dp[3] = 4;

		for (int i = 4;i <= n;i++) {
			dp[i] = (dp[i - 1] + dp[i - 2] + dp[i - 3]);
		}

		cout << dp[n] << "\n";

	}
	return 0;
}