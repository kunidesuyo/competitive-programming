#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    string x;
    cin >> x;
    vector<int> pos(26);
    for(int i = 0; i < 26; i++) {
        pos[x[i] - 'a'] = i;
    }
    int n;
    cin >> n;
    vector<string> S(n);
    for(string& s : S) {
        cin >> s;
    }
    sort(begin(S), end(S), [&](const string& s, const string& t) {
        int len = min(s.length(), t.length());
        for(int i = 0; i < len; i++) {
            if(s[i] != t[i]) {
                return pos[s[i] - 'a'] < pos[t[i] - 'a'];
            }
        }
        return s.length() < t.length();
    });

    for(const string& s : S) {
        cout << s << endl;
    }

    return 0;
}