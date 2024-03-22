#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; test_case++) {
		int a = 0;
		int b = 0;
		string str;
		string answer = "YES";
		stack <char>s;

		cin >> str;

		for (int i = 0; i < str.length();i++) {
			if (str[i] == '(') {
				s.push('(');
			}

			if (str[i] == ')') {
				if (s.empty()) {
					answer = "NO";
					break;
				}
				else {
					s.pop();
				}
			}
		}

		if (!s.empty())
			answer = "NO";

		cout << answer << endl;

	}
	return 0;
}
