#include <iostream>
#define max 1000001
int a[max] = { 0, };
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	a[0] = a[1] = 1;
	for (int i = 0;i * i < max;i++) {
		if (a[i] == 1) {
			continue;
		}
			
		for (int j = i * i;j < max;j += i) {
				a[j] = 1;
		}
	}


	int T;
	cin >> T;

	for (int test_case = 0; test_case < T;test_case++) {
		int n, ans = 0;
		cin >> n;

		if (n == 4) {
			ans++;
		}
		

		for (int i = 3;i <= n / 2 ;i+=2) {
			if (!a[i] && !a[n - i])
				ans++;
		}
		cout << ans << "\n";
	}

	return 0;
}