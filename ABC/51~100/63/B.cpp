#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    string s;
    cin >> s;
    vector<int> a(26, 0);

    for(int i = 0; i < s.length(); i++) {
        a[s[i] - 'a']++;
    }

    bool ans = true;
    for(int i = 0; i < 26; i++) {
        if(a[i] > 1) {
            ans = false;
            break;
        }
    }
    if(ans) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }

    return 0;
}