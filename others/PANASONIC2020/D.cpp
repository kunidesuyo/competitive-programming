#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int n;
int cnt;

void solve(string s, char m) {
    if(s.length() == n) {
        cout << s << endl;
        cnt++;
        return;
    }

    for(char c = 'a'; c <= m; c++) {
        if(c == m) solve(s+c, m+1);
        else solve(s+c, m);
    }

}

int main() {
    cin >> n;
    cnt = 0;

    solve("", 'a');

    int num = 1;
    for(int i = 1; i <= n; i++) {
        num *= i;
    }

    return 0;
}