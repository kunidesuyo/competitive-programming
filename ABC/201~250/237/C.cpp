#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.length();
    int count = 0;
    for(int i = n-1; i >= 0; i--) {
        if(s[i] == 'a') {
            count++;
        } else {
            break;
        }
    }
    int count2 = 0;
    for(int i = 0; i < n; i++) {
        if(s[i] == 'a') {
            count2++;
        } else {
            break;
        }
    }

    if(count < count2) {
        cout << "No" << endl;
        return 0;
    }
    
    s = s.substr(count2, n-count-count2);
    string t = s;
    reverse(all(t));
    if(s == t) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}