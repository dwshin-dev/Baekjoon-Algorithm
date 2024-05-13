#include <iostream>
#include <algorithm>
#define MAX 100001
using namespace std;
int dp[MAX][2] = { 0, };
int a[MAX] = { 0, };
int main(int argc, char* argv[])
{
	int n;
	cin >> n;

	for (int i = 0;i < n;i++) {
		cin >> a[i];
	}

	int ans = a[0];
	dp[0][0] = a[0];
	dp[0][1] = a[0];

	for (int i = 1;i < n;i++) {
		dp[i][0] = max(dp[i - 1][0] + a[i], a[i]);
		dp[i][1] = max(dp[i - 1][0], dp[i - 1][1] + a[i]);
		ans = max(ans, max(dp[i][0], dp[i][1]));
	}


	cout << ans << '\n';

	return 0;
}