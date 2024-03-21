#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main(int argc, char** argv) {
    int n, a, b;
    cin >> n;
    vector<pair<int, int>> list;

    for (int i = 0; i < n; i++)
    {
        cin >> b >> a;
        list.push_back(make_pair(a, b));
    }

    sort(list.begin(), list.end());

    int t = list[0].first;
    int ans = 1;
    int j = 0;
    for (int i = 1; i <= n; i++)
    {
        if (list[i].second >= t)
        {
            ans++;
            t = list[i].first;
        }
    }
    cout << ans;

    return 0;//정상종료시 반드시 0을 리턴해야합니다.
}