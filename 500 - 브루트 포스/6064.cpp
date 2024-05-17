#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a, int b) { // �ִ� �����
	if (b == 0)
		return a;
	return gcd(b, a % b);
}

int lcm(int a, int b) { // �ּ� �����
	return (a * b) / gcd(a, b);
}

int main(int argc, char* argv[])
{

	int test_case;
	cin >> test_case;

	for (int T = 1;T <= test_case;T++) {
		int m, n, x, y, ans = -1;
		cin >> m >> n >> x >> y;
		int maxi = lcm(m, n); // ��������

		for (int i = x; i <= maxi; i += m) {
			int ny = i % n; // y��
			if (ny == 0) // �̶��� y�� �ִ밪�� ��
				ny = n;

			if (ny == y) { // ����
				ans = i;
				break;
			}
		}

		cout << ans << '\n'; 
	}

	return 0;
}