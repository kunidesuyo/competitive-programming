#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    ll k;
    cin >> k;
    string a, b;
    cin >> a >> b;

    ll aa = 0;
    ll bb = 0;

    reverse(all(a));
    reverse(all(b));


    ll num = 1;
    for(ll i = 0; i < a.length(); i++) {
        ll x = a[i] - '0';
        aa += x * num;
        num *= k;
    }

    num = 1;
    for(ll i = 0; i < b.length(); i++) {
        ll x = b[i] - '0';
        bb += x * num;
        num *= k;
    }

    /*cout << aa << endl;
    cout << bb << endl;*/

    cout << aa * bb << endl;

    return 0;
}