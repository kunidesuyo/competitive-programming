#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    vector<int> rs(26, -1);   
    vector<int> rt(26, -1);   

    bool ans = true;

    for(int i = 0; i < s.length(); i++) {
        if(rs[s[i]-'a'] >= 0) {
            if(rs[s[i]-'a'] != t[i] - 'a') {
                ans = false;
            }
        } else {
            rs[s[i]-'a'] = t[i] - 'a';
        }

        if(rt[t[i]-'a'] >= 0) {
            if(rt[t[i]-'a'] != s[i] - 'a') {
                ans = false;
            }
        } else {
            rt[t[i]-'a'] = s[i] - 'a';
        }
        if(!ans) break;
    }

    cout << (ans ? "Yes" : "No") << endl;

    return 0;
}