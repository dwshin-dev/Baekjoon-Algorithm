#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool btn[10] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };

bool valid(int n) {
	if (n == 0) {
		if (btn[0]) return true;
		return false;
	}
	while (n) {
		if (!btn[n % 10]) return false;
		n /= 10;
	}
	return true;
}

int main(int argc, char* argv[])
{
	int n, m, ch = 100;
	
	cin >> n >> m;

	for (int i = 0;i < m;i++) {
		int b_btn;
		cin >> b_btn;
		btn[b_btn] = 0;
	}

	int ans = abs(ch - n);

	for (int i = 0; i <= 1000000; i++) {
		if (valid(i)) {
			int t = to_string(i).length();
			t += abs(i - n);
			ans = min(ans, t);
		}
	}

	cout << ans << '\n';

	return 0;
}