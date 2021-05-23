#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, string>> st(n);
    for(int i = 0; i < n; i++) {
        int a;
        string b;
        cin >> b >> a;
        st[i] = make_pair(a, b);
    }

    sort(st.begin(), st.end());

    cout << st[n-2].second << endl;

    return 0;
}