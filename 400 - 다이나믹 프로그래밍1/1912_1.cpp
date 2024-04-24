#include <iostream>
#include <algorithm>
using namespace std;
int a[100001] = { 0, };
int b[100001] = { 0, };
int dp[100001] = { 0, };

int main(int argc, char* argv[])
{
	int n, ans = 0;
	cin >> n; 
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}

	ans = a[0];
	dp[0] = a[0];

	for (int i = 1; i < n; ++i) {
		dp[i] = max(dp[i - 1] + a[i], a[i]);
		ans = max(dp[i], ans);
	}
	cout << ans << "\n";

	return 0;
}