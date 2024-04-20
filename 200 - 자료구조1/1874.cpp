#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
	int n, i = 1;
	cin >> n;
	stack <int> s;
	string str;

	while (n--) {
		int num;
		cin >> num;

		if (i <= num) {
			while (i <= num) {
				s.push(i);
				str += '+';
				i++;
			}
			s.pop();
			str += '-';
		}
		else {
			if (s.top() < num) {
				cout << "NO" << '\n';
				return 0;
			}
			else {
				s.pop();
				str += '-';
			}
		}
	}

	for (int i = 0;i < str.length();i++) {
		cout << str[i] << '\n';
	}

	return 0;
}