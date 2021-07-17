#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    string s;
    cin >> s;
    int k;
    cin >> k;
    int n = s.length();

    for(int i = 0; i < n; i++) {
        int num = s[i] - 'a';
        if(num == 0) continue;
        if(num + k >= 26) {
            s[i] = 'a';
            k -= 26 - num;
        }
    }

    if(k > 0) {
        int num = s[n-1] - 'a';
        num += k;
        num %= 26;
        s[n-1] = 'a' + num;
    }
    cout << s << endl;

    return 0;
}