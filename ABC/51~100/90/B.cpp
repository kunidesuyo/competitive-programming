#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int ans = 0;
    for(int i = a; i <= b; i++) {
        string s = to_string(i);
        string t = s;
        reverse(t.begin(), t.end());
        if(s == t) ans++;
    }

    cout << ans << endl;

    return 0;
}