#include <iostream>
using namespace std;

#define MAX 1000000
bool arr[MAX] = { false, };

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); 
	cout.tie(NULL);

	arr[0] = arr[1] = 1;

	for (int i = 2;i * i <= MAX / 2;i++) {
		if (arr[i])
			continue;
		
			
		for (int j = i*i; j < MAX; j += i) {
			arr[j] = 1;
		
		}
	}

	int a;

	while (true) {
		cin >> a;
		if (a == 0)
			break;

		bool b = false;

		for (int i = 3;i <= a ;i += 2) {
			if (!arr[i] && !arr[a - i]) {
				cout << a << " = " << i << " + " << a - i << "\n";
				b = true;
				break;
			}
		}
		if (!b)
			cout << "Goldbach's conjecture is wrong. \n";
	}

	return 0;
}