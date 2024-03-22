#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	int test_case;
	cin >> test_case;
	cin.ignore(); //버퍼비우기 cin 사용후 \n이 버퍼에 남아있어서 getline에 입력이 되기 때문
	for (int t = 1; t <= test_case; t++) {
		string str;
		getline(cin, str);
		str += ' ';
		stack<char> s;

		for (int i = 0; i < str.length(); i++) {
			if (str[i] == ' ') {
				while (!s.empty()) {
					cout << s.top();
					s.pop();
				}
				cout << ' ';
			}
			else
				s.push(str[i]);
		}
		cout << '\n';
	}
	return 0;
}