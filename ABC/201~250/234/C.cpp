#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;


int main() {
    ll n;
    cin >> n;

    vector<int> x;

    while(n != 0) {
        if(n % 2 == 0) {
            x.push_back(0);
        } else {
            x.push_back(2);
        }
        n /= 2;
    }

    reverse(all(x));

    bool ok = false;
    for(int i = 0; i < x.size(); i++) {
        if(x[i] != 0) {
            ok = true;
        } 
        if(ok) cout<<x[i];
    }
    cout << "\n";



    return 0;
}