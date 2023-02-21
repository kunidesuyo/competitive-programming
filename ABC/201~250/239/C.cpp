#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
    int x[2], y[2];
    cin >> x[0] >> y[0] >> x[1] >> y[1];

    int dxy1[2] = {1, -1};
    int dxy2[2] = {2, -2};

    set<pair<int, int>> cx;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            pair<int, int> a;
            a.first = x[0] + dxy1[i];
            a.second = y[0] + dxy2[j];
            cx.insert(a);
        }
    }
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            pair<int, int> a;
            a.first = x[0] + dxy2[i];
            a.second = y[0] + dxy1[j];
            cx.insert(a);

        }
    }


    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            pair<int, int> a;
            a.first = x[1] + dxy1[i];
            a.second = y[1] + dxy2[j];

            if(cx.find(a) != cx.end()) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            pair<int, int> a;
            a.first = x[1] + dxy2[i];
            a.second = y[1] + dxy1[j];

            if(cx.find(a) != cx.end()) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;

    return 0;
}