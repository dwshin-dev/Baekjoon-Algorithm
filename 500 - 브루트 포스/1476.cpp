#include <iostream>
#include <algorithm>
using namespace std;
int E, S, M, Y = 1;
int main(int argc, char* argv[])
{
	int e = 1, s = 1, m = 1;
	cin >> E >> S >> M;
	while (1) {
		if (E == e && S == s && M == m) {
			cout << Y << '\n';
			return 0;
		}
		e++;
		s++;
		m++;
		Y++;
		if (e > 15)
			e = 1;
		if (s > 28)
			s = 1;
		if (m > 19)
			m = 1;
	}

	return 0;
}