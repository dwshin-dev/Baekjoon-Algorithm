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
	int ans = -1001; //n의 범위 -1000 < n < 100 이기 때문

	for (int i = 1; i <= n; i++) {
		cin >> a[i]; 
		dp[i] = b[i] = a[i]; // dp 와 b 에 a를 넣어준다.
	}
	
	for (int i = 1; i <= n; i++) {
		for(int j=i+1;j<=n;j++){
			b[i] += a[j]; //i부터 j까지 더한 값들을 b[i]에 저장해준다.
			if (dp[i] < b[i])
				dp[i] = b[i];
		}
		if (ans < dp[i])
			ans = dp[i];
	}

	cout << ans << "\n";

	return 0;
}