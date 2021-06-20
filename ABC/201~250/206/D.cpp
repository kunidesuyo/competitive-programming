#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;



int main() {
    int n;
    cin >> n;
    int a[n];
    vector<bool> c(200010, false);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        c[a[i]] = true;
    }
    int num1 = 0;
    for(int i = 1; i <= 200000; i++) {
        if(c[i] == true) num1++;
    }    

    vector<vector<int>> g(200010);
    for(int i = 0; i < n; i++) {
        int j = n - 1 - i;
        g[a[i]].push_back(a[j]);
        g[a[j]].push_back(a[i]);
    }


    // renketu seibun suu
    int num2 = 0;
    for(int i = 1; i <= 200000; i++) {
        if(c[i] == true) {
            num2++;
            //dfs
            stack<int> s;
            s.push(i);
            while(!s.empty()) {
                int now = s.top(); s.pop();
                c[now] = false;
                for(auto x : g[now]) {
                    if(c[x] == true) s.push(x);
                }
            }
        }
    }

    cout << num1 - num2 << endl; 

    return 0;
}