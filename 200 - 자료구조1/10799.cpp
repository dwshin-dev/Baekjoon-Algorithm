#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	int a = 0;
	stack<char> s;
	string str;
	cin >> str;
	for (int i = 0;i < str.length();i++) {
		if (str[i] == '(') {
			if (str[i + 1] != ')') {
				s.push(str[i]);
			}
			else {
				a += s.size();
			}
		}
		else {
			if (str[i - 1] != '(') {
				s.pop();
				a++;
			}
		}
	}

	cout << a;

	return 0;
}