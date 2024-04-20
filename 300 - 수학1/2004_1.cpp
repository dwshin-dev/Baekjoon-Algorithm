#include <iostream>
#include <algorithm>
using namespace std;
long long test(int num, int cnt) {
	int ans = 0;
	for (long long i = cnt; i <= num; i *= cnt) {
		ans += num / i;
	}

	return ans;
}
int main() {
	int n, m;
	long long two = 0, five = 0;
	cin >> n >> m;

	two = test(n, 2) - test(m, 2) - test(n - m, 2);
	five = test(n, 5) - test(m, 5) - test(n - m, 5);

	cout << min(two, five);

}