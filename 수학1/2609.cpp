#include <iostream>
#include <stack>
using namespace std;
int main() {
	int A, B;
	int MIN, MAX;
	stack<int> s;

	cin >> A >> B;
	
	MIN = A > B ? B : A;
	MAX = A > B ? A : B;

	for (int i = MIN;i >= 1;i--) {
		if (MAX % i == 0 && MIN % i == 0) {
			cout << i << "\n";
			break;
		}
	}

	for (int i = 1;i <= MIN;i++) {
		if ((MAX * i) % MIN == 0) {
			cout << MAX * i << "\n";
			break;
		}
	}

	return 0;
}