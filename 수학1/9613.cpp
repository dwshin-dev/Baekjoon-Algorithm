#include <iostream>

using namespace std;

int gcd(int x, int y)
{
	if (x % y == 0) return y;
	else return gcd(y, x % y);
}

int main() {
	int t;
	int n;
	long long a[101] = { 0, };
	
	cin >> t;

	for (int test_case = 0; test_case < t;test_case++) {
		long long sum = 0;
		cin >> n;
		for (int i = 0;i < n;i++) {
			cin >> a[i];
		}

		for (int i = 0;i < n;i++) {
			for (int j = i + 1;j < n;j++) {
				sum += gcd(a[i], a[j]);
			}
		}
		cout << sum << "\n";
	}

	return 0;
}