#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int janken(char a, char b) {
    //a kati 1 make -1 aiko 0
    if(a == b) {
        return 0;
    }
    if(a == 'G' && b == 'C') return 1;
    if(a == 'C' && b == 'P') return 1;
    if(a == 'P' && b == 'G') return 1;
    return -1;
}

typedef pair<int, int> P;

bool comp(P a, P b) {
    if(a.first > b.first) {
        return true;
    } else if(a.first == b.first) {
        if(a.second < b.second) {
            return true;
        } else {
            return false;
        }
    } else {
        return false;
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    char a[2*n][m];
    for(int i = 0; i < 2*n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    vector<P> ans;
    for(int i = 0; i < 2*n; i++) {
        ans.push_back(P(0, i));
    }
    
    //sort(all(ans), comp);

    for(int j = 0; j < m; j++) {
        for(int i = 0; i < n; i++) {
            int p1 = ans[2*i].second;
            int p2 = ans[2*i+1].second;
            int num = janken(a[p1][j], a[p2][j]);
            if(num == 1) {
                ans[2*i].first++;
            } else if (num == -1) {
                ans[2*i+1].first++;
            }
        }
        sort(all(ans), comp);
    }

    for(auto x : ans) {
        cout << x.second+1 << endl;
    }

    return 0;
}