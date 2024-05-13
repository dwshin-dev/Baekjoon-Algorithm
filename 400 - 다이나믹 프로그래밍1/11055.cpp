#include <iostream>
#include <algorithm>
#define MAX 1001
using namespace std;
int dp[MAX] = { 0, };
int a[MAX] = { 0, };
int main(int argc, char* argv[])
{
	int n, max1 = 0;
	cin >> n;

	for (int i = 0;i < n;i++) {
		cin >> a[i];
	}


	for (int i = 0; i < n;i++) {
		dp[i] = a[i];
		for (int j = i - 1;j >= 0;j--) {
			if (a[i] > a[j]) {
				dp[i] = max(dp[i],(dp[j] + a[i]));
			}
		}
		max1 = max(max1, dp[i]);
	}

	cout << max1;

	return 0;
}