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
    vector<bool> a(2010, false);
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a[x] = true;
    }
    for(int i = 0; i < 2010; i++) {
        if(a[i] == false) {
            cout << i << endl;
            return 0;
        }
    }    
    
}