// AOJ
// https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_7_B&lang=ja
#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
    
    int n;
    int x;
    while(true) {
        cin >> n >> x;
        if(n == 0 && x == 0) break;
        int ans = 0;

        for(int i = 1; i <= n-2; i++) {
            for(int j = i+1; j <= n-1; j++) {
                for(int k = j+1; k <= n; k++) {
                    if(i+j+k == x) ans++;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}