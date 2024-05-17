#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a, int b) { // 최대 공약수
	if (b == 0)
		return a;
	return gcd(b, a % b);
}

int lcm(int a, int b) { // 최소 공배수
	return (a * b) / gcd(a, b);
}

int main(int argc, char* argv[])
{

	int test_case;
	cin >> test_case;

	for (int T = 1;T <= test_case;T++) {
		int m, n, x, y, ans = -1;
		cin >> m >> n >> x >> y;
		int maxi = lcm(m, n); // 마지막값

		for (int i = x; i <= maxi; i += m) {
			int ny = i % n; // y값
			if (ny == 0) // 이때는 y가 최대값이 됨
				ny = n;

			if (ny == y) { // 정답
				ans = i;
				break;
			}
		}

		cout << ans << '\n'; 
	}

	return 0;
}