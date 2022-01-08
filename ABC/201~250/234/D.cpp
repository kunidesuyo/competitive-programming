#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int p[n];
    for(int i = 0; i < n; i++) cin >> p[i];

    priority_queue<int, vector<int>, less<int>> big;
    priority_queue<int, vector<int>, greater<int>> small;

    // big k-th small

    for(int i = 0; i < k; i++) {
        small.push(p[i]);
    }

    int kth = small.top();
    vector<int> ans;
    ans.push_back(kth);
    small.pop();
    for(int i = k; i < n; i++) {
        if(p[i] < kth) {
            big.push(p[i]);
        } else {
            big.push(kth);
            small.push(p[i]);
            kth = small.top();
            small.pop();
        }
        ans.push_back(kth);
    }

    for(auto x : ans) cout << x << endl;

    return 0;
}