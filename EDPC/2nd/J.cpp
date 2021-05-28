#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

template<class T> inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
    }
template<class T> inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

int n;
double dp[310][310][310];

double rec(int i, int j, int k) {
    if(dp[i][j][k] >= 0) return dp[i][j][k];
    if(i == 0 && j == 0 && k == 0) return 0.0;

    double val = 0.0;
    if(i > 0) val += rec(i-1, j, k) * i;
    if(j > 0) val += rec(i+1, j-1, k) * j;
    if(k > 0) val += rec(i, j+1, k-1) * k;
    val += n;
    val *= 1.0 / (i+j+k);

    return dp[i][j][k] = val;
}

int main() {
    cin >> n;
    int one = 0, two = 0, three = 0;
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if(a == 1) one++;
        else if(a == 2) two++;
        else three++;
    }

    memset(dp, -1, sizeof(dp));

    cout << fixed << setprecision(10) << rec(one, two, three) << endl;
    

    return 0;
}