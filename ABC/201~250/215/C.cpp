#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    string s;
    cin >> s;
    int k;
    cin >> k;

    int n = s.length();

    vector<int> x(26, 0);
    for(int i = 0; i < n; i++) {
        int num = s[i] - 'a';
        x[num]++;
    }

    char c[n];
    int now = 0;
    for(int i = 0; i < 26; i++) {
        while(x[i] > 0) {
            char v = 'a' + i;
            c[now] = v;
            now++;
            x[i]--;
        }
    }

    int w = 0;
    do {
        w++;
        if(w == k) {
            for(int i = 0; i < n; i++) {
                cout << c[i];
            }
            cout << "\n";
            break;
        }

    } while(next_permutation(c, c+n));


    return 0;
}