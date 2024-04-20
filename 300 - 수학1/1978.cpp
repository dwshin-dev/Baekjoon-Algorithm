#include <iostream>
using namespace std;
int main() {
	int N, ans = 0;
	cin >> N;

	for (int T = 1;T <= N;T++){
		bool b = true;
		int a;
		cin >> a;
		for (int i = 2;i < a;i++) {
			if (a % i == 0) {
				b = false;
				break;
			}
		}
		if (a != 1 && b == true)
			ans++;
	}

	cout << ans;

	return 0;
}