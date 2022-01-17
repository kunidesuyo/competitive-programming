#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
    int q;
    cin >> q;

    vector<int> p;
    for(int i = 3; i <= 100000; i++) {
        bool like2017 = true;
        for(int j = 2; j * j <= i; j++) {
            if(i % j == 0) {
                like2017 = false;
                break;
            }
        }
        if(like2017 == false) continue;
        int num = (i+1) / 2;
        for(int j = 2; j * j <= num; j++) {
            if(num % j == 0) {
                like2017 = false;
                break;
            }
        }
        if(like2017) p.push_back(i);
    }

    //cout << (int)p.size() << endl;
    //for(auto x : p) cout << x << endl;

    vector<int> ans;
    for(int i = 0; i < q; i++) {
        int num = 0;
        int l, r;
        cin >> l >> r;
        for(auto x : p) {
            if(l <= x && x <= r) num++;
        }
        ans.push_back(num);
    }

    for(auto x : ans) cout << x << endl;

    return 0;
}