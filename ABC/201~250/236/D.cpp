#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int n, n2;
vector<vector<int>> a;
int ans;
void dfs(vector<bool> s, int x) {
    int si = -1;
    for(int i = 0; i < n2; i++) {
        if(!s[i]) {
            si = i;
            break;
        }
    }
    if(si == -1) {
        ans = max(ans, x);
        return;
    }
    s[si] = true;
    for(int i = 0 ; i < n2; i++) {
        if(!s[i] && si != i) {
            s[i] = true;
            dfs(s, x^a[si][i]);
            s[i] = false;
        }
    }
}



int main() {
    cin >> n;
    n2 = n*2;
    a = vector<vector<int>>(n2, vector<int>(n2));
    for(int i = 0; i < n2; i++) {
        for(int j = i+1; j < n2; j++) {
            cin >> a[i][j];
            a[j][i] = a[i][j];
        }
    }

    ans = 0;
    vector<bool> s(n2);
    dfs(s, 0);

    cout << ans << endl;

    return 0;
}