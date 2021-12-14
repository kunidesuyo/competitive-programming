#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.length();

    bool ans1 = false;
    bool ans2 = false;
    bool ans3 = false;
    if(s[0] == 'A') ans1 = true;
    int c = 0;
    for(int i = 2; i <= n-2; i++) {
        if(s[i] == 'C') c++;
    }
    if(c == 1) ans2 = true;
    ans3 = true;
    for(int i = 0; i < n; i++) {
        if(!(i == 0 || (2 <= i && i <= n-2))) {
            int num = s[i] - 'a';
            if(!(0 <= num && num < 26)) {
                ans3 = false;
            }
        }
    }

    if(ans1 && ans2 && ans3) {
        cout << "AC" << endl;
    } else {
        cout << "WA" << endl;
    }

    return 0;
}