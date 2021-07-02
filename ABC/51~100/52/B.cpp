#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    int n;
    string s;
    cin >> n;
    cin >> s;

    int ans = 0;
    int x = 0;

    for(int i = 0; i < n; i++) {
        if(s[i] == 'I') {
            x++;
        } else {
            x--;
        }
        ans = max(ans, x);
    }

    cout << ans << endl;

    return 0;
}