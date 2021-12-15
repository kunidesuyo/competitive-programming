#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    int n;
    cin >> n;
    string s[n];
    for(int i = 0; i < n; i++) {
        cin >> s[i];
    }
    int m;
    cin >> m;
    string t[m];
    for(int i = 0; i < m; i++) {
        cin >> t[i];
    }

    int ans = 0;
    for(int i = 0; i < n; i++) {
        string x = s[i];
        int num = 0;
        for(int j = 0; j < n; j++) {
            if(x == s[j]) num++;
        }
        for(int j = 0; j < m; j++) {
            if(x == t[j]) num--;
        }
        ans = max(ans, num);
    }
    cout << ans << endl;

    return 0;
}