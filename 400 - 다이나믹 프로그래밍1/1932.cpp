#include <iostream>
#include <algorithm>
#define MAX 501
using namespace std;
int dp[MAX][MAX] = { 0, };
int a[MAX][MAX] = { 0, };
int main(int argc, char* argv[])
{
	int n;
	cin >> n;

	for (int i = 0;i < n;i++) {
		for (int j = 0;j <= i;j++) {
			cin >> a[i][j];
		}
	}

	dp[0][0] = a[0][0];
	dp[1][0] = dp[0][0] + a[1][0];
	dp[1][1] = dp[0][0] + a[1][1];

	for (int i = 2;i < n;i++) {
		for (int j = 0;j <= i;j++) {
			
			dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j]) + a[i][j];
		}
	}
	dp[n][0] = dp[n - 1][0];
	for (int i = 0;i < n;i++) {
		dp[n][0] = max(dp[n][0], dp[n - 1][i]);
	}


	cout << dp[n][0];

	return 0;
}