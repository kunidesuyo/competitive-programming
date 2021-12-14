#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    int a, b, k;
    cin >> a >> b >> k;

    if(b-a+1 > 2*k) {
        for(int i = a; i <= a+k-1; i++) {
            cout << i << endl;
        }
        for(int i = b-k+1; i <= b; i++) {
            cout << i << endl;
        }
    } else {
        for(int i = a; i <= b; i++) {
            cout << i << endl;
        }
    }


    return 0;
}