#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    int a[h][w];
    for(int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            char s;
            cin >> s;
            if(s == '.') {
                a[i][j] = 0;
            } else {
                a[i][j] = 1;
            }
        }
    }


    vector<int> kaijonasi(h);

    for(int i = 0; i < h; i++) {
        bool kesu = true;
        for(int j = 0; j < w; j++) {
            if(a[i][j] == 1) kesu = false;
        }
        if(kesu) {
            for(int j = 0; j < w; j++) {
                a[i][j] = -1;
            }
            kaijonasi[i] = 1;
        }
    }


    for(int i = 0; i < w; i++) {
        bool kesu = true;
        for(int j = 0; j < h; j++) {
            if(a[j][i] == 1) kesu = false;
        }
        if(kesu) {
            for(int j = 0; j < h; j++) {
                a[j][i] = -1;
            }
        }
    }


    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            if(a[i][j] == 1) {
                cout << "#";
            } else if(a[i][j] == 0){
                cout << ".";
            }
        }
        if(kaijonasi[i] == 0) cout << "\n";
    }



    return 0;
}