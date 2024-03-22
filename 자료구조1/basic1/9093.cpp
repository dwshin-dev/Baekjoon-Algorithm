#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	int test_case;
	cin >> test_case;
	cin.ignore(); //���ۺ��� cin ����� \n�� ���ۿ� �����־ getline�� �Է��� �Ǳ� ����
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