#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.length();
    int i = 0;

    string pattern[6] = {"dreameraser", "dreamerase", 
    "dreamer", "dream", "eraser", "erase"};

    bool ans;

    while(i <= n) {
        bool match = false;
        for(int j = 0; j < 6; j++) {
            int l = pattern[j].length();
            if(l <= n-i) {
                if(equal(pattern[j].begin(), pattern[j].end(), s.begin()+i)) {
                    match = true;
                    i += l;
                } 
            }
            if(match) break;
        }
        if(i == n) {
            ans = true;
            break;
        }
        if(!match) {
            ans = false;
            break;
        }
    }

    cout << (ans ? "YES" : "NO") << endl;
    

    return 0;
}