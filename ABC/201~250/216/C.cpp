#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    ll n;
    cin >> n;

    string ans;
    while(n != 0) {
        if(n % 2 == 0) {
            ans.push_back('B');
            n /= 2;
        } else {
            ans.push_back('A');
            n -= 1LL;
        }
    }
    
    reverse(all(ans));
    cout << ans << endl;

    return 0;
}