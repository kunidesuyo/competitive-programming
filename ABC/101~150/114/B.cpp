#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.length();

    int ans = 100000;
    for(int i = 0; i < n-2; i++) {
        int num = 0;
        num += 100 * (s[i] - '0');
        num += 10 * (s[i+1] - '0');
        num += 1 * (s[i+2] - '0');
        ans = min(ans, abs(753 - num));
    }
    cout << ans << endl;

    return 0;
}