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
    for(int i = 0; i < n; i++) cin >> a[i];

    map<int, int> m;
    for(int i = 0; i < n; i++) {
        m[a[i]]++;
    }
    for(auto& x : m) {
        x.second--;
    }
    /*for(auto x : m) {
        cout << x.second << endl;
    }*/
    int num = m.size();
    int ex = n - num;
    if(ex % 2 != 0) num--; 
    cout << num << endl;

    /*stack<int> s;
    for(int i = n-1; i >= 0; i--) s.push(a[i]);
    
    while(true) {
        vector<int> x;
        for(int i = 0; i < 3; i++) {
            x.push_back(s.top());
            s.pop();
        }
        sort(all(x));
        //cout << "x" << endl;
        //for(auto z : x) cout << z << endl;
        //cout << m[x[0]] << endl;
        m[x[0]]--;
        //cout << m[x[0]] << endl;
        m[x[2]]--;
        s.push(x[1]);
        bool ok = true;
        for(auto k : m) {
            //cout << k.second << endl;
            if(k.second > 0) {
                ok = false;
            }
            if(ok == false) break;
        }
        if(ok) break;
    }

    cout << s.size() << endl;*/

    return 0;
}