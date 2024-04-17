#include <iostream>
using namespace std;

int main() {
	int N, ans = 1;
	cin >> N;

	for (int i = 1; i <= N; i++) {
		ans *= i;
	}

	if (N == 0)
		cout << 1;
	else
		cout << ans;


	return 0;
}