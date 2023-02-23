#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int x[200010];
int y[200010];
priority_queue<int, vector<int>, greater<int>> q;


int main() {
    int n;
    cin >> n;
    map<int, int> right_min;
    map<int, int> left_max;
    set<int> Set;
    for(int i = 0; i < n; i++) {
        int n1, n2;
        cin >> n1 >> n2;
        x[i] = n1;
        y[i] = n2;
        Set.insert(y[i]);
    }
    string s;
    cin >> s;
    for(auto itr = Set.begin(); itr != Set.end(); itr++) {
        right_min[(*itr)] = 1000000010;
        left_max[(*itr)] = -1;
    }
    for(int i = 0; i < n; i++) {
        if(s[i] == 'L') {
            left_max[y[i]] = max(left_max[y[i]], x[i]);
        } else {
            right_min[y[i]] = min(right_min[y[i]], x[i]);
        }
    }
    bool ans = false;
    for(auto itr = Set.begin(); itr != Set.end(); itr++) {
        if(right_min[(*itr)] < left_max[(*itr)]) {
            ans = true;
            break;
        }
    }
    if(ans) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    

    return 0;
}