#include <iostream>
using namespace std;

int main() {
	int N, ans = 1;
	cin >> N;

	ans = N / 5;

	ans += N / 25;

	ans += N / 125;


	cout << ans;

	return 0;
}