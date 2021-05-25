#include <bits/stdc++.h>
#include <cmath>

//解説動画参照

using ll = long long;

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

const int INF = 1001001001;

int h, w;
int a[2005][2005];
bool visited[2005][2005];
int memo[2005][2005];

int f(int i, int j) {
    if(i == h-1 && j == w-1) return 0;
    if(visited[i][j]) return memo[i][j];
    visited[i][j] = true;
    int res = -INF;
    if(j+1 < w) res = max(res, a[i][j+1]-f(i, j+1));
    if(i+1 < h) res = max(res, a[i+1][j]-f(i+1, j));
    //printf("%d %d: %d\n", i, j, res);
    return memo[i][j] = res;
}

int main() {
    cin >> h >> w;
    vector<string> s(h);
    for(int i = 0; i < h; i++) cin >> s[i];

    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            if(s[i][j] == '+') {
                a[i][j] = 1;
            } else {
                a[i][j] = -1;
            }
        }
    }

    int score = f(0, 0);
    if(score == 0) {
        cout << "Draw" << endl;
    } else if(score < 0) {
        cout << "Aoki" << endl;
    } else {
        cout << "Takahashi" << endl;
    }

    return 0;
}