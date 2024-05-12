#include <iostream>
#include <algorithm>
#define MODULER 10007
using namespace std;
int dp[1001][10] = { 0, };

int main(int argc, char* argv[])
{
	int n;
	cin >> n;

	for (int i = 0; i <= 9; i++) {
		dp[0][i] = 1;
	}

	for (int i = 1; i < n; i++) {
		for (int j = 0; j <= 9; j++) {
			for (int k = 0; k <= j; k++) {
				dp[i][j] = (dp[i][j] + dp[i - 1][k]) % MODULER;
			}
		}
	}

	for (int i = 0; i <= 9; i++) {
		dp[n][0] = (dp[n][0] + dp[n - 1][i]) % MODULER;
	}

	cout << dp[n][0] << '\n';

	return 0;
}