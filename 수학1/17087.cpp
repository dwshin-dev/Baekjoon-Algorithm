#include <iostream>
using namespace std;

int a[100001];

int func(int x, int y) {
	if (y == 0) return x;
	else return func(y, x % y);
}

int main(int argc, char* argv[])
{
	int n, s;


	cin >> n >> s;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] > s)
			a[i] = a[i] - s;
		else
			a[i] = s - a[i];
	}

	int ans = a[0];

	for (int i = 1; i < n; i++)
	{
		ans = func(ans, a[i]);
	}

	cout << ans << '\n';


	return 0;
}