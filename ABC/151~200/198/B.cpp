#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    string s;
    cin >> s;
    

    string t = s;
    reverse(t.begin(), t.end());

    if(s == t) {
        cout << "Yes" << endl;
        return 0;
    }
    
    int n = s.length();

    for(int i = 0; i < n; i++) {
        reverse(s.begin(), s.end());
        s.push_back('0');
        reverse(s.begin(), s.end());
        t = s;
        reverse(t.begin(), t.end());
        if(s == t) {
            cout << "Yes" << endl;
        return 0;
        }
    }
    
    cout << "No" << endl;

    return 0;
}