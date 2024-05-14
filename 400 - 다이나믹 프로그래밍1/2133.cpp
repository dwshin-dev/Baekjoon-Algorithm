#include <iostream>
#include <algorithm>
#define MAX 31
using namespace std;
int dp[MAX] = { 0, };
int main(int argc, char* argv[])
{
	int n;
	cin >> n;

	if (n % 2 == 1) {
		cout << 0 << '\n';
		return 0;
	}

	dp[0] = 1;
	dp[1] = 0;
	dp[2] = 3;
	for (int i = 4;i <= n;i+=2) {
		dp[i] = dp[i - 2] * dp[2];
		for (int j = i - 4;j >= 0;j -= 2) {
			dp[i] = dp[i] + (dp[j] * 2);
		}
	}

	cout << dp[n] << '\n';

	return 0;
}