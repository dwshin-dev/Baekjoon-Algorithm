#include <iostream>
#include <string>
#include <stack>
using namespace std;
void printword(stack<char>& s) {
	while (!s.empty()) {
		cout << s.top();
		s.pop();
	}
}
int main() {
	stack<char> s;
	string str;
	getline(cin, str);


	for (int i = 0;i < str.length();i++) {
		if (str[i] == '<') {
			printword(s);
			while (1) {
				cout << str[i];
				if (str[i] == '>')
					break;
				i++;
			}
		}
		else if (str[i] == ' ') {
			printword(s);
			cout << ' ';
		}
		else {
			s.push(str[i]);
		}
	}
	printword(s);


	return 0;
}