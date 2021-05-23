#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.length();
    int r_num = 0;

    string t;

    for(int i = 0; i < n; i++) {
        if(s[i] == 'R') {
            r_num++;
        } else {
            if(r_num % 2 == 0) {
                if(t.length() == 0) {
                    t.push_back(s[i]);
                    continue;
                }
                if(t[t.length()-1] == s[i]) {
                    t.erase(t.length()-1, 1);
                } else {
                    t.push_back(s[i]);
                }
            } else {
                if(t.length() == 0) {
                    t.push_back(s[i]);
                    continue;
                }
                if(t[0] == s[i]) {
                    t.erase(0, 1);
                } else {
                    t = s[i] + t;
                }
            }
        }
    }

    if(r_num % 2 == 1) reverse(t.begin(), t.end());

    /*for(int i = 0; i < t.length();) {
        if(t[i] == t[i+1]) {
            t.erase(i, 2);
            i--;
            continue;
        }
        i++;
    }*/


    cout << t << endl;

    return 0;
}