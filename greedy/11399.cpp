#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(int argc, char** argv) {
    int n, time = 0;
    int p[1001] = { 0, };
    cin >> n;
    for (int i = 0;i < n;i++) {
        cin >> p[i];
    }

    sort(p, p + n);

    int cnt = n;

    for (int i = 0;i < n;i++) {
        time += p[i] * cnt;
        cnt--;
    }

    cout << time;
    return 0;
}