#include <iostream>
#include <algorithm>
using namespace std;
int a[1001] = { 0, };
int dp[1001] = { 0, };

int main(int argc, char* argv[])
{
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}

	int ans = 0;
	for (int i = 1; i <= n; i++) {
		dp[i] = 1;
		for (int j = i - 1; j >= 1; j--) {
			if (a[i] > a[j]) {
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
		ans = max(dp[i], ans);
	}

	cout << ans << "\n";

	return 0;
}