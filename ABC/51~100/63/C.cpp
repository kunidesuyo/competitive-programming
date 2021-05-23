#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;
    int s[n];
    for(int i = 0; i < n; i++) cin >> s[i];

    int sum = 0;
    for(int i = 0; i < n; i++) sum += s[i];

    sort(s, s+n);

    if(sum % 10 != 0) {
        cout << sum << endl;
        return 0;
    } 

    for(int i = 0; i < n; i++) {
        if(s[i] % 10 != 0) {
            sum -= s[i];
            cout << sum << endl;
            return 0;
        }
    }

    cout << 0 << endl;

    return 0;
}