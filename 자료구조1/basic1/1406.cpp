#include <iostream>
#include <string>
using namespace std;

int main() {

	string str;
	cin >> str;
	int n, cnt = str.length();
	string a;
	cin >> n;
	char c;
	for (int i = 0;i < n;i++) {
		cin >> c;
		if (c == 'L') {
			if (cnt > 0)
				cnt--;
		}
		else if (c == 'D') {
			if (cnt < str.length())
				cnt++;
		}
		else if (c == 'B') {
			if (cnt > 0) {
				str.erase(str.begin() + cnt - 1);
				cnt--;
			}
		}
		else if (c == 'P') {
			cin >> a;
			str = str.insert(cnt, a);
			cnt++;
		}
	}

	cout << str;


	return 0;
}