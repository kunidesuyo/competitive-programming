#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;
    set<string> se;
    string s[n];
    for(int i = 0; i < n; i++) cin >> s[i];

    for(int i = 0; i < n; i++) {
        int size = se.size();
        se.insert(s[i]);
        if(size != se.size()) cout << i+1 << endl;
    }

    return 0;
}