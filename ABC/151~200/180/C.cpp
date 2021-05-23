#include <iostream>
#include <string.h>
#include <algorithm>
#include <cmath>
#include <bits/stdc++.h>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    long n;
    cin >> n;

    set<long> ans;
    for(long d = 1; d * d <= n; d++) {
        if(n % d == 0) {
            ans.insert(d);
            ans.insert(n / d);
        }
    }

    for(auto x : ans) {
        cout << x << endl;
    }

    return 0;
}