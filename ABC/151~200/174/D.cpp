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

    int a = 0, b = 0;
    for(int i = 0; i < n; i++) {
        if(s[i] == 'R') b++;
    }

    int ans = max(a, b);
    
    for(int i = 0; i < n; i++) {
        if(s[i] == 'R') {
            b--;
        } else {
            a++;
        }
        int x = max(a, b);
        ans = min(x, ans);
    }

    cout << ans << endl;
    

    return 0;
}