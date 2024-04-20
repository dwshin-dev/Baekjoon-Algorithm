#include <iostream>
#include <stack>
using namespace std;

int main() {
	int n, num, result;
	stack<int> s;
	string c;

	cin >> n;

	while (n) {
		cin >> c;

		if (c == "push") {
			cin >> num;
			s.push(num);
		}
		else if (c == "pop") {
			if (s.size() == 0) {
				cout << -1 << endl;
			}
			else {
				cout << s.top() << endl;
				s.pop();
			}
		}
		else if (c == "size") {
			cout << s.size() << endl;
		}
		else if (c == "empty") {
			if (s.size() == 0) {
				cout << 1 << endl;
			}
			else {
				cout << 0 << endl;
			}
		}
		else if (c == "top") {
			if (s.size() == 0) {
				cout << -1 << endl;
			}
			else {
				cout << s.top() << endl;
			}
		}
		n--;
	}

	return 0;
}