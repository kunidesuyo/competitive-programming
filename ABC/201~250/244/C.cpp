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

    int x;
    set<int> dic;
    for(int i = 1; i <= 2*n+1; i++) {
        dic.insert(i);
    }
    while(true) {
        auto itr = dic.lower_bound(1);
        cout << (*itr) << endl;
        dic.erase(itr);
        cin >> x;
        if(x == 0) return 0;
        dic.erase(x);
    }   

    return 0;
}