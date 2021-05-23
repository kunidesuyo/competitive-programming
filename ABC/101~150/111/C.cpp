#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;
    int v[n];
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<int> odd(100001);
    vector<int> even(100001);

    for(int i = 0; i < n; i++) {
        if(i % 2 == 0) {
            even[v[i]]++;
        } else {
            odd[v[i]]++;
        }
    }

    int odd_max[2] = {0, 0};
    int even_max[2] = {0, 0};
    int odd_max_val, even_max_val;

    for(int i = 1; i <= 100000; i++) {
        if(odd[i] >= odd_max[0]) {
            odd_max[1] = odd_max[0];
            odd_max[0] = odd[i];
            odd_max_val = i;
        } else if (odd_max[0] > odd[i] && odd[i] > odd_max[1]) {
            odd_max[1] = odd[i];
        }
        if(even[i] >= even_max[0]) {
            even_max[1] = even_max[0];
            even_max[0] = even[i];
            even_max_val = i;
        } else if (even_max[0] > even[i] && even[i] > even_max[1]) {
            even_max[1] = even[i];
        }
    }

    int ans;

    if(odd_max_val != even_max_val) {
        ans = n - odd_max[0] - even_max[0];
    } else {
        int num1 = n - odd_max[0] - even_max[1];
        int num2 = n - odd_max[1] - even_max[0];
        num1 = min(num1, num2);
        ans = num1;
    }

    cout << ans << endl;

    return 0;
}