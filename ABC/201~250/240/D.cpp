#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int total = 0;
    stack<pair<int, int>> s;
    for(int i = 0; i < n; i++) {
        pair<int, int> now;
        pair<int, int> top;
        if(s.empty()) {
            now.first = a[i];
            now.second = 1;
            s.push(now);
        } else {
            top = s.top();
            if(top.first == a[i]) {
                top.second++;
                s.pop();
                s.push(top);
            } else {
                now.first = a[i];
                now.second = 1;
                s.push(now);
            }
        }
        total++;
        top = s.top();
        if(top.first == top.second) {
            total -= top.second;
            s.pop();
        }
        cout << total << endl;
    }

    return 0;
}