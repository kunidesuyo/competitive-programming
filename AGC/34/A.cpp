#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    int a, b, c, d;
    cin >> n >> a >> b >> c >> d;
    string s;
    cin >> s;

    s = "#" + s + "#";

    auto can_reach = [&](int start, int end) {
        for(int i = start; i+1 <= end; i++) {
            if(s[i] == '#' && s[i+1] == '#') return false;
        }
        return true;
    };

    if(!can_reach(a,c) || !can_reach(b,d)) {
        cout << "No" << endl;
        return 0;
    }


    if(c > d) {
        bool over = false;
        for(int i = b; i <= d; i++) {
            if(s[i-1] == '.' && s[i] == '.' && s[i+1] == '.') {
                over = true;
            }
        }
        if(!over) {
            cout << "No" << endl;
            return 0;
        }
    }


    cout << "Yes" << endl;
    

    return 0;
}