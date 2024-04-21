#include <iostream>
#include <algorithm>
using namespace std;
int p[10001];
int dp[10001] = { 0 };

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;

	for (int i = 1;i <= n;i++) {
		cin >> p[i];
	}

	for (int i = 1;i <= n;i++) {
		dp[i] = p[i];
	}

	for (int i = 2;i <= n;i++) {
		for (int j = 1; j < i; j++) {
			dp[i] = min(dp[i - j] + p[j], dp[i]);
		}
	}

	cout << dp[n] << "\n";

	return 0;
}