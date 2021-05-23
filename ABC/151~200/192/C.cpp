#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    ll k;
    string n1;
    cin >> n1 >> k;

    string n2 = n1;
    

    for(ll i = 0; i < k; i++) {
        sort(n1.begin(), n1.end());
        sort(n2.begin(), n2.end(), greater<char>());
        ll num1 = atoi(n1.c_str());
        ll num2 = atoi(n2.c_str());
        ll num = num2 - num1;
        n1 = to_string(num);
        n2 = to_string(num);
    }
    
    cout << n1 << endl;


    return 0;
}