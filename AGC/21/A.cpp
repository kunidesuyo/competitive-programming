#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.length();

    int ans = 0;
    int num = s[0] - '0';
    bool x = true;
    for(int i = 1; i < n; i++) {
        //cout << s[i] << endl;
        if(s[i] != '9') x = false;
    }
    ans += num;
    //cout << ans << endl;
    if(!x) ans--;
    //cout << ans << endl;
    ans += 9 * (n-1);
    cout << ans << endl;



    return 0;
}