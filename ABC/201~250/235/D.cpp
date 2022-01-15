#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int rotate(int x) {
    int keta = 0;
    int num = x;
    while(num != 0) {
        num /= 10;
        keta++;
    }
    int val = 1;
    for(int i = 0; i < keta-1; i++) val *= 10;

    int top = x / val;
    int r = x % val;
    int r_keta = 0;
    num = r;
    while(num != 0) {
        num /= 10;
        r_keta++;
    }
    if(r_keta < keta-1) return -1;
    r *= 10;
    r+= top;

    return r;
}

vector<int> dp(1000000, -1);

int ans = inf;

bool s = false;
void solve(int a, int n, int v) {
    if(dp[n] != -1) {
        return;
    }


    dp[n] = v;
    //cout << a << " " << n << " " << v << endl;
    if(n == 1) {
        ans = min(ans, v);
        s = true;
        return;
    }
 
    int keta = 0;
    int num = n;
    while(num != 0) {
        num /= 10;
        keta++;
    }

    if(n % a == 0) {
        solve(a, n/a, v+1);
        
    }
    for(int i = 0; i < keta-1; i++) {
        n = rotate(n);
        v++;
        if(n != -1) {
            if(n%a == 0) solve(a, n/a, v+1);
        }
    }


}

int main() {
    int a, n;
    cin >> a >> n;

    //dp[n] = 0;
    solve(a, n, 0);

    if(s) {
        cout << ans << endl;
    } else {
        cout << -1 << endl;
    }


    return 0;
}