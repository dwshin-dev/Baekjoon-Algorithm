#include <iostream>
#include <algorithm>
using namespace std;
int a[100001] = { 0, };
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
		dp[i] = max(dp[i - 1] + a[i], a[i]); //dp[i] = a[i]까지의 부분합중 가장 큰값 과 a[i]값을 비교
		ans = max(dp[i], ans);
	}
	cout << ans << "\n";

	return 0;
}