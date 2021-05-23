#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    string s, t;
    cin >> s;
    cin >> t;

    int n = s.length();
    int m = t.length();
    vector<int> index;

    for(int i = 0; i < n-m+1; i++) {
        bool match = true;
        for(int j = 0; j < m; j++) {
            if(!(s[i+j] == t[j] || s[i+j] == '?')) {
                match = false;
                break;
            }
        }
        if(match) index.push_back(i);
    }

    if(index.size() == 0) {
        cout << "UNRESTORABLE" << endl;
        return 0;
    }

    int t_position = index[index.size()-1];

    for(int i = 0; i < n; i++) {
        if(i == t_position) {
            cout << t;
            i += m-1;
        } else if(s[i] == '?'){
            cout << "a";
        } else {
            cout << s[i];
        }
    }
    cout << "\n";

    return 0;
}