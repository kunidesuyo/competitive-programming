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

int main() {
    int n, k;
    cin >> n >> k;
    int a[n][n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    queue<int> q;

    int ans = 1000000000 + 10;
    int index = (k * k) / 2;

    for(int j = 0; j <= n-k; j++) {
        queue<int> q;
        for(int x = 0; x < k; x++) {
            for(int y = 0; y < k; y++) {
               q.push(a[x][j+y]);
            }
        }
        for(int i = 0; i <= n-k; i++) {
            if(i != 0) {
                for(int x = 0; x < k; x++) {
                    q.pop();
                }
                for(int x = 0; x < k; x++) {
                    q.push(a[i+k-1][j+x]);
                }
            }
            queue<int> p = q;
            vector<int> ike;
            for(int x = 0; x < k*k; x++) {
                //cout << p.front();
                ike.push_back(p.front());
                p.pop();
            }
            //cout << endl;
            sort(ike.begin(), ike.end(), greater<int>());
            ans = min(ans, ike[index]);
        }
    }

    cout << ans << endl;


    return 0;
}