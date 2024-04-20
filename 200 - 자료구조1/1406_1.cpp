#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	string str;
	stack <char> left;
	stack <char> right;
	cin >> str;
	for (int i = 0; i < str.length();i++) {
		left.push(str[i]);
	}

	int n;
	char a, c;
	cin >> n;

	for (int i = 0;i < n;i++) {
		cin >> c;
		if (c == 'L') {
			if (!left.empty()) {
				right.push(left.top());
				left.pop();
			}
		}
		else if (c == 'D') {
			if (!right.empty()) {
				left.push(right.top());
				right.pop();
			}
		}
		else if (c == 'B') {
			if (!left.empty()) {
				left.pop();
			}
		}
		else if (c == 'P') {
			cin >> a;
			left.push(a);
		}
	}

	while (!left.empty()) {
		right.push(left.top());
		left.pop();
	}

	while (!right.empty()) {
		cout << right.top();
		right.pop();
	}

	return 0;
}