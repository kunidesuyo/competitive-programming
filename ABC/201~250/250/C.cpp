#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    int x[q];
    for(int i = 0; i < q; i++) {
        cin >> x[i];
        x[i]--;
    }
    int index[n];
    int a[n];
    for(int i = 0; i < n; i++) {
        index[i] = i;
        a[i] = i;
    }

    for(int i = 0; i < q; i++) {
        int y = x[i];
        int now_index = index[y];
        int next_index = now_index+1;
        if(next_index >= n) {
            next_index = now_index-1;
        }
        // cout << "now_index" << now_index << endl;
        // cout << "next_index" << next_index << endl;
        swap(index[a[now_index]], index[a[next_index]]);
        swap(a[now_index], a[next_index]);
        // for(int i = 0; i < n; i++) {
        //     cout << a[i]+1 << " ";
        // }
        // cout << "\n";
    }

    for(int i = 0; i < n; i++) {
        cout << a[i]+1 << " ";
    }
    cout << "\n";

    return 0;
}