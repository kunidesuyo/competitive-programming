#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;
    map<int, int> m[n];
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        for(int j = 0; j < s.length(); j++) {
            m[i][s[j]-'a']++;
        }  
    }

    string ans;
    for(int i = 0; i < 26; i++) {
        int mini = 100;
        for(int j = 0; j < n; j++) {
            mini = min(mini, m[j][i]);
        }
        for(int j = 0; j < mini; j++) {
            ans += ('a' + i);
        }
    }

    cout << ans << endl;
    

    return 0;
}