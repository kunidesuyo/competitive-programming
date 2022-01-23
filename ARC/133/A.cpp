#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    int num = a[n-1];
    for(int i = 0; i < n-1; i++) {
        if(a[i] > a[i+1]) {
            num = a[i];
            break;
        }
    }
    for(int i = 0; i < n; i++) {
        if(a[i] != num) {
            cout << a[i] << " ";
        }
    }
    cout << "\n";

    return 0;
}