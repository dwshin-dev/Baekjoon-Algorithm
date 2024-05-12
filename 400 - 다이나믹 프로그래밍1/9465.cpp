#include <iostream>
#include <algorithm>
#define MAX 100001
#define MODULER 10007
using namespace std;
int dp[MAX][3] = { 0, };
int score[MAX][2] = { 0, };

int main(int argc, char* argv[])
{

	int test_case;
	cin >> test_case;
	for (int T = 1;T <= test_case;T++) {
		int n;
		cin >> n;

		for (int i = 0;i < n;i++) {
			cin >> score[i][0];
		}
		for (int i = 0;i < n;i++) {
			cin >> score[i][1];
		}

		dp[0][0] = 0;
		dp[0][1] = score[0][0];
		dp[0][2] = score[0][1];
		for (int i = 1;i < n;i++) {
			dp[i][0] = max(dp[i - 1][1], dp[i - 1][2]);
			dp[i][1] = max((dp[i - 1][0] + score[i][0]), (dp[i - 1][2] + score[i][0]));
			dp[i][2] = max((dp[i - 1][0] + score[i][1]), (dp[i - 1][1] + score[i][1]));
		}
		dp[n][0] = max(max(dp[n - 1][0], dp[n - 1][1]), dp[n - 1][2]);
		cout << dp[n][0] << '\n';

	}

	

	return 0;
}