#include <iostream>
#include <algorithm>
#define MAX 10001
using namespace std;
int dp[MAX] = { 0, };
int a[MAX] = { 0, };
int main(int argc, char* argv[])
{
	int n;
	cin >> n;

	for (int i = 0;i < n;i++) {
		cin >> a[i];
	}

	dp[0] = a[0];
	dp[1] = a[0] + a[1];
	dp[2] = max(max((a[0] + a[1]), (a[1] + a[2])), (a[0] + a[2]));


	for (int i = 3;i < n;i++) {
		dp[i] = max(max((dp[i - 3] + a[i - 1] + a[i]), (dp[i-2] + a[i])), dp[i-1]);

	}	

	cout << dp[n-1];

	return 0;
}