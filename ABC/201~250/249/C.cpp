#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    string s[n];
    for(int i = 0; i < n; i++) cin >> s[i];

    bool dic[n][26];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 26; j++) {
            dic[i][j] = false;
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < s[i].length(); j++) {
            int key = s[i][j] - 'a';
            dic[i][key] = true;
        }
    }

    int ans = 0;

    for(int bit = 0; bit < (1<<n); bit++) {
        int x = 0;
        for(int c = 0; c < 26; c++) {
            int match = 0;
            for(int i = 0; i < n; i++) {
                if(bit & (1<<i)) {
                    if(dic[i][c] == true) {
                        match++;
                    }
                }
            }
            if(match == k) x++;
        }
        ans = max(ans, x);
    }

    cout << ans << endl;

    return 0;
}