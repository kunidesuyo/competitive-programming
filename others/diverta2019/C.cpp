#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;
    string s[n];
    for(int i = 0; i < n; i++) {
        cin >> s[i];
    }

    int a = 0; 
    int b = 0;
    int ba = 0;
    int ans = 0;

    for(int i = 0; i < n; i++) {
        int len = s[i].length();
        for(int j = 0; j < len-1; j++) {
            if(s[i][j] == 'A' && s[i][j+1] == 'B') ans++;
        }
        if(s[i][0] == 'B' && s[i][len-1] == 'A') {
            ba++;
        } 
        if(s[i][0] == 'B' && s[i][len-1] != 'A') {
            b++;
        } 
        if(s[i][0] != 'B' && s[i][len-1] == 'A') {
            a++;
        }
    }

    if(a == 0) {
        a++;
        ba--;
    }

    if(ba < 0) {
        cout << ans << endl;
        return 0;
    }

    int num = n-1;
    num = min(num, a + ba);
    num = min(num, b + ba);
    ans += num;

    cout << ans << endl;

    return 0;
}