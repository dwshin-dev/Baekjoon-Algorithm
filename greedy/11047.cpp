#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(int argc, char** argv) {
    int N, K, cnt = 0;
    cin >> N >> K;
    int a[11];
    for (int i = 0; i < N;i++) {
        cin >> a[i];
    }
   
    for (int i = N - 1;i >= 0;i--) {
        cnt += K / a[i];
        K = K % a[i];
    }

    cout << cnt;

    return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}