#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;
    string s[n];
    for(int i = 0; i < n; i++) cin >> s[i];

    map<string, int> m;

    for(int i = 0; i < n; i++) {
        m[s[i]]++;
    }

    int ma = 0;
    for(auto it = m.begin(); it != m.end(); it++) {
        ma = max(ma, it->second);
    }


    for(auto it = m.begin(); it != m.end(); it++) {
        if(it->second == ma) {
            cout << it->first << endl;
        }
    }

    

    return 0;
}