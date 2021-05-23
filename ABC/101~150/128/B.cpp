#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;
    pair<pair<string, int>, int> sp[n];
    for(int i = 0; i < n; i++) {
        string s;
        int num;
        cin >> s >> num;
        sp[i] = make_pair(make_pair(s, -num), i + 1);
    }

    sort(sp, sp + n);

    for(int i = 0; i < n; i++) {
        cout << sp[i].second << endl;
    }

    return 0;
}