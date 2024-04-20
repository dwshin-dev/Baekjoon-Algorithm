#include <iostream>
#include <string>
using namespace std;


int main(int argc, char* argv[])
{
	string str;
	cin >> str;

	for (int i = 0; i <str.length() ; i++) {
		int a[3] = { 0, };
		for (int j = 0; j < 3; j++) {
			a[j] = str[i] % 2;
			str[i] /= 2;
		}
		for (int j = 2; j >= 0; j--) {
			if (i == 0) {
				if (j == 2 && a[j] == 0)
					continue;
				if (j == 1 && a[j + 1] == 0 && a[j] == 0)
					continue;
			}
			cout << a[j];
		}
	}

	return 0;
}