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
    int q;
    cin >> q;
    deque<int> deq;
    for(int i = 0; i < q; i++) {
        int t, x;
        cin >> t >> x;
        if(t == 1) {
            deq.push_front(x);
        } else if(t == 2){
            deq.push_back(x);
        } else {
            cout << deq[x-1] << endl;
        }
    }

    //for(int i = s; i <= e; i++) cout << ans[i] << endl;

    return 0;
}