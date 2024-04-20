#include <iostream>
#include <stack>
using namespace std;
int a[1000001] = { 0, };
int f[1000001] = { 0, };
int ans[1000001] = { 0, };
stack<int> s;

int main() {
	int n;
	cin >> n;
	for (int i = 0;i < n;i++) {
		cin >> a[i];
		f[a[i]]++;
	}
	
	for (int i = n - 1;i >= 0;i--) {
		while (!s.empty() && f[s.top()] <= f[a[i]]) {
			s.pop();
		}

		if (s.empty()) {
			ans[i] = -1;
		}
		else {
			ans[i] = s.top();
		}
		s.push(a[i]);
	}

	for (int i = 0;i < n;i++) {
		cout << ans[i] << ' ';
	}

	return 0;
}