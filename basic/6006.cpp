#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(int argc, char** argv) {
    int test_case;
    int T;
    cin >> T;
    for (test_case = 1; test_case <= T; ++test_case)
    {
        int a, cnt = 1, b = 0;
        string n;
        int score[50][50];
        int sum = 0;

        cin >> a; //농장의 크기
        cnt = a / 2;

        for (int i = 0; i < a; i++) {
            cin >> n;
            for (int j = 0; j < a; j++) {
                score[i][j] = n[j] - '0';
            }
        }

        for (int i = 0; i < a; i++) {
            for (int j = 0; j < a; j++) {
                if (j >= cnt && j <= a - cnt - 1)
                    sum = sum + score[i][j];
            }
            if (cnt == 0)
                b = 1;

            if (b == 0)
                cnt--;
            else
                cnt++;
        }

        cout << "#" << test_case << " " << sum << " \n";
    }
    return 0;//정상종료시 반드시 0을 리턴해야합니다.
}