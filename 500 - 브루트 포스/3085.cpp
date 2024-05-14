#include <iostream>
#include <algorithm>
using namespace std;

char a[51][51];
int max1 = 1;
int n;
void check();
int main(int argc, char* argv[])
{
	cin >> n;
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n;j++) {
			cin >> a[i][j];
		}
	}

	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n - 1;j++) {
			swap(a[i][j], a[i][j + 1]);
			check();
			swap(a[i][j], a[i][j + 1]);
		}
	}

	for (int i = 0;i < n - 1;i++) {
		for (int j = 0;j < n;j++) {
			swap(a[i][j], a[i + 1][j]);
			check();
			swap(a[i][j], a[i + 1][j]);
		}
	}

	cout << max1 << '\n';

	return 0;
}
void check() {
	char c;
	//가로행 검사
	for (int i = 0;i < n;i++) {
		int count = 1;
		c = a[i][0];
		for (int j = 1;j < n;j++) {
			if (c == a[i][j]) {
				count++;
			}
			else {
				count = 1;
			}
			c = a[i][j];
			max1 = max(max1, count);
		}
	}
	//세로행 검사
	for (int i = 0;i < n;i++) {
		int count = 1;
		c = a[0][i];
		for (int j = 1;j < n;j++) {
			if (c == a[j][i]) {
				count++;
			}
			else {
				count = 1;
			}
			c = a[j][i];
			max1 = max(max1, count);
		}
	}
}