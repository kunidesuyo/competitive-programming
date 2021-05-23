#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    //gomi
    string s, t;
    cin >> s;
    cin >> t;

    int sl = s.length();
    int tl = t.length();
    char ss[sl], tt[tl];

    for(int i = 0; i < sl; i++) {
        ss[i] = s[i];
    }
    
    for(int i = 0; i < tl; i++) {
        tt[i] = t[i];
    }


    sort(ss, ss + sl);
    sort(tt, tt + tl, greater<char>());

    /*for(int i = 0; i < sl; i++) {
        cout << ss[i];
    }
    cout << endl;

    for(int i = 0; i < tl; i++) {
        cout << tt[i];
    }
    cout << endl;*/

    int num = min(sl, tl);
    bool ans = false;

    for(int i = 0; i < num; i++) {
        if(ss[i] < tt[i]) {
            ans = true;
            break;
        } else if(ss[i] > tt[i]) {
            break;
        }
        if(i == num - 1) {
            if(sl < tl) ans = true;
        }
    }

    cout << (ans ? "Yes" : "No") << endl;

    return 0;
}