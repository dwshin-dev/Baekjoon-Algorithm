#include <iostream>
#include <string>
using namespace std;


int main(int argc, char* argv[])
{
	string str;
	cin >> str;

	while (str.length() % 3 != 0) {
		str = '0' + str;
	}

	for (int i = 0; i <str.length() ; i+=3) {
		int a = 0;
		a = 1 * (str[i + 2] - '0') + 2 * (str[i + 1] - '0') + 4 * (str[i] - '0');
		cout << a;
	}

	return 0;
}