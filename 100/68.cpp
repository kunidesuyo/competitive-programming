#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()



using namespace std;

int main() {
    int n;
    cin >> n;


    vector<int> prim;
    for(int i = 2; i * i <= n; i++) {
        bool not_prim = false;
        for(int j = 2; j*j <= i; j++) {
            if(i % j == 0) not_prim = true;
            if(not_prim) break;
        }
        if(not_prim == false) prim.push_back(i);
    }

    int x = n;

    vector<int> ans;
    for(int i = 0; i < (int)prim.size(); i++) {
        int num = prim[i];
        while(x % num == 0) {
            x /= num;
            ans.push_back(num);
        }
    }
    if(x > 1) ans.push_back(x);

    cout << n << ": ";
    for(int i = 0; i < (int)ans.size(); i++) {
        if(i != 0) cout << " ";
        int x = ans[i];
        cout << x ;
    }
    cout << "\n";

    return 0;
}