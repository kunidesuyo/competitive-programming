#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    int q;
    cin >> q;

    queue<int> a1;
    priority_queue<int, vector<int>, greater<int>> a2;
   

    for(int i = 0; i < q; i++) {
        int query;
        int x;
        cin >> query;
        if(query == 1) {
            cin >> x;
            a1.push(x);
        } else if(query == 2) {
            if(a2.empty()) {
                cout << a1.front() << endl;
                a1.pop();
            } else {
                cout << a2.top() << endl;
                a2.pop();
            }
        } else {
            while(!a1.empty()) {
                a2.push(a1.front());
                a1.pop();
            }
        }
        
    }
     

    return 0;
}