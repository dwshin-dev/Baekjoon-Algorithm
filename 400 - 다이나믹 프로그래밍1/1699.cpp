#include <iostream>
#include <algorithm>
using namespace std;
int dp[100001] = { 0, };

int main(int argc, char* argv[])
{
	int n;
	cin >> n;
    for (int i = 0; i <= n; i++) dp[i] = i; // 1만의 합으로 이루어진 구성이라 가정

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j * j <= i; j++) {
            dp[i] = min(dp[i], dp[i - j * j] + 1);
        }
    }
    cout << dp[n];

	return 0;
}