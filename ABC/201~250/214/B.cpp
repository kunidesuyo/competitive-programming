#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    int s, t;
    cin >> s >> t;

    int ans = 0;
    for(int a = 0; a <= 100; a++) {
        for(int b = 0; b <= 100; b++) {
            for(int c =0; c <= 100; c++) {
                if(a+b+c <= s && a*b*c <= t) ans++;
            }
        }
    }
    cout << ans << endl;

    return 0;
}