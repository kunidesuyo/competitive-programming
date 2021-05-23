#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int q;
    cin >> q;
    int t[q], a[q], b[q];
    for(int i = 0; i < q; i++) {
        cin >> t[i] >> a[i] >> b[i];
    }

    int count = 0;

    for(int i = 0; i < q; i++) {
        if(t[i] == 2) {
            count++;
        } else if(t[i] == 1) {
            int ai = a[i]-1;
            int bi = b[i]-1;
            if(count % 2 != 0) {
                ai = (ai + n) %(2*n);
                bi = (bi + n) % (2 * n);
            }
            swap(s[ai], s[bi]);
        }
    }

    if(count % 2 != 0) {
        string s1, s2;
        for(int i = 0; i < n; i++) {
            s1.push_back(s[i]);
            s2.push_back(s[i+n]);
        }
        s = s2 + s1;
    }

    cout << s << endl;

    return 0;
}