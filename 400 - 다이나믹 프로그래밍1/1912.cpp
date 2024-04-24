#include <iostream>
#include <algorithm>
using namespace std;
int a[100001] = { 0, }; //수를 입력받는 배열
int b[100001] = { 0, }; //부분합을 저장하기 위한 배열
int dp[100001] = { 0, }; //dp값을 저장하는 배열

int main(int argc, char* argv[])
{
	int n;
	cin >> n; 
	int ans = -1001; 

	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		dp[i] = b[i] = a[i];
	}
	
	for (int i = 1; i <= n; i++) {
		for(int j=i+1;j<=n;j++){
			b[i] += a[j];
			if (dp[i] < b[i])
				dp[i] = b[i];
		}
		if (ans < dp[i])
			ans = dp[i];
	}

	cout << ans << "\n";

	return 0;
}