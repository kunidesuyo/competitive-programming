#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    int n, l;
    cin >> n >> l;
    string s[n];
    for(int i = 0; i < n; i++) cin >> s[i];

    sort(s,s+n);

    for(int i = 0; i < n; i++) {
        cout << s[i];
    }
    cout << "\n";

    return 0;
}