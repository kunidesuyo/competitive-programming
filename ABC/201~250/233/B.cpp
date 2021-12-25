#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    int l, r;
    cin >> l >> r;
    string s;
    cin >> s;
    int n = s.length();

    string t = s.substr(l-1, r-l+1);

    reverse(all(t));

    cout << s.substr(0, l-1);
    cout << t ;
    cout << s.substr(r, n-r) << endl;

    return 0;
}