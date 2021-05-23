#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.length();

    set<char> done;

    int ans = 1000;

    for(int i = 0; i < n; i++) {
        if(done.find(s[i]) != done.end()) {
            continue;
        }
        char c = s[i];
        done.insert(c);
        string t = s;
        int count = 0;
        for(int i = 0; i < n; i++) {
            if(t[i] == c) count++;
        }
        if(count == n) {
            ans = min(ans, 0);
            break;
        }
        for(int i = 0; i < n; i++) {
            count = 0;
            for(int j = 0; j < n - i - 1; j++) {
                if(t[j] == c || t[j+1] == c) {
                    t[j] = c;
                    count++;
                }
            }
            if(count == n-i-1) {
                ans = min(ans, i+1);
            }
        }
    }

    cout << ans << endl;

    return 0;
}