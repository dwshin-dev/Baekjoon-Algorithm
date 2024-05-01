#include <iostream>
#include <algorithm>
using namespace std;
#define MOD 1000000000
int dp[201][201] = { 0, };

int main(int argc, char* argv[])
{
	int n, k;
	cin >> n >> k;

	for (int i = 1; i <= k; i++) {
		for (int j = 0; j <= n; j++) {
			for (int m = 0; m <= j; m++) {
				dp[i][j] += dp[i - 1][j - m];
				dp[i][j] %= MOD;
			}
<<<<<<< HEAD
		}//
=======
		}//sss
>>>>>>> 928a92a8e292a75336b7c3398a8de6efad0fbf9c
	}

	cout << dp[n][k];

	return 0;
}