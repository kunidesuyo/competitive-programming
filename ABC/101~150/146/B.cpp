#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    

    for(int i = 0; i < s.size(); i++) {
        if(s[i] - 'A' + n < 26) {
            s[i] += n;
        } else {
            s[i] += n - 26;
        }
    }

    cout << s << endl;

    return 0;
}