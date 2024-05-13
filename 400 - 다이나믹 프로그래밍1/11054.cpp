#include <iostream>
#include <algorithm>
#define MAX 1001
using namespace std;
int dp[MAX][2] = { 0, };
int a[MAX] = { 0, };
int main(int argc, char* argv[])
{
	int n, ans = 0;
	cin >> n;

	for (int i = 0;i < n;i++) {
		cin >> a[i];
	}


	for (int i = 0; i < n;i++) {
		dp[i][0] = 1;
		for (int j = i - 1;j >= 0;j--) {
			if (a[i] > a[j]) {
				dp[i][0] = max(dp[i][0],(dp[j][0] + 1));
			}
		}
	}

	for (int i = n-1; i >= 0;i--) {
		dp[i][1] = 1;
		for (int j = i + 1;j < n;j++) {
			if (a[i] > a[j]) {
				dp[i][1] = max(dp[i][1], (dp[j][1] + 1));
			}
		}
	}

	for (int i = 0;i < n;i++) {
		ans = max(ans, dp[i][0] + dp[i][1] - 1);
	}

	cout << ans << '\n';

	return 0;
}