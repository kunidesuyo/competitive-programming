#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    string s,t;
    cin >> s >> t;
    int n = s.length();

    for(int i = 0; i < n; i++) {
        bool m = true;
        for(int j = i, k = 0; k < n; j++,k++) {
            int num = j % n;
            if(s[num] != t[k]) {
                m = false;
                break;
            }
        }
        if(m) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;


    return 0;
}