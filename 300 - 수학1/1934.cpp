#include <iostream>
using namespace std;
int main() {
	int test_case;
	cin >> test_case;

	for (int T = 1;T <= test_case;T++) {
		int A, B, MIN, MAX;
		cin >> A >> B;
		
		MIN = A > B ? B : A;
		MAX = A > B ? A : B;

		for (int i = 1;i <= MIN;i++) {
			if ((MAX * i) % MIN == 0) {
				cout << MAX * i << "\n";
				break;
			}
		}
	}

	return 0;
}