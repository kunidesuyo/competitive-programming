#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;



int main() {
    int h, w;
    cin >> h >> w;
    string a[h];
    for(int i = 0; i < h; i++) {
        cin >> a[i];
    }

    int taka = 0, aoki = 0;

    for(int i = 0; i < h; i++) { 
        for(int j = 0; j < w; j++) {
            if(i == 0 && j == 0) break;
            if((i+j) % 2 != 0) {
                if(a[i][j] == '+') taka++;
            } else {
                if(a[i][j] == '+') aoki++;
            }
        }
    }

    int x = 0;
    int y = 0;
    int turn = 0;
    int score_aoki = 0, score_taka=0;

    while(!(x == h-1 && y == w-1)) {
        //sita
        int d_ta = 0, d_ao = 0; //+ heru kazu
        for(int i = y; i < w; i++) {
            if((i+x) % 2 != 0) {
                if(a[x][i] == '+') d_ta++;
            } else {
                if(a[x][i] == '+') d_ao++;
            }
        }
        int r_ta = 0, r_ao = 0;
        for(int i = x; i < h; i++) {
            if((i+y) % 2 != 0) {
                if(a[i][y] == '+') r_ta++;
            } else {
                if(a[i][y] == '+') r_ao++;
            }
        }
        bool go_sita;
        if(turn % 2 == 0) {
            if(taka - d_ta - (aoki - d_ao) > taka - r_ta - (aoki - r_ao)) {
                go_sita = true;
            } else {
                go_sita = false;
            }
        } else {
            if(-(taka - d_ta) + (aoki - d_ao) > -(taka - r_ta) + (aoki - r_ao)) {
                go_sita = false;
            } else {
                go_sita = true;
            }
        }
        if(y == w-1) {
            go_sita = true;
        }
        if(x == h-1) {
            go_sita = false;
        }

        if(go_sita) {
            taka -= d_ta;
            aoki -= d_ao;
        } else {
            taka -= r_ta;
            aoki -= r_ao;
        }

        if(turn % 2 == 0) {
            if(go_sita) {
                x++;
                if(a[x][y] == '+') {
                    score_taka++;
                } else {
                    score_taka--;
                }
            } else {
                y++;
                if(a[x][y] == '+') {
                    score_taka++;
                } else {
                    score_taka--;
                }
            }
        } else {
            if(go_sita) {
                x++;
                if(a[x][y] == '+') {
                    score_aoki++;
                } else {
                    score_aoki--;
                }
            } else {
                y++;
                if(a[x][y] == '+') {
                    score_aoki++;
                } else {
                    score_aoki--;
                }
            }
        }

        turn++;
    }


    if(score_taka > score_aoki) {
        cout << "Takahashi" << endl;
    } else if(score_taka < score_aoki) {
        cout << "Aoki" << endl;
    } else {
        cout << "Draw" << endl;
    }

    return 0;
}