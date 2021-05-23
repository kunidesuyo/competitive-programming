#include <bits/stdc++.h>
#include <cmath>

using ll  = long long;
const ll  INF = __LONG_LONG_MAX__;

using namespace std;

// kitanai

ll nCr(ll n, ll r) {
    ll  ans = 1;
    for (ll i = n; i > n - r; --i) {
        ans = ans*i;
    }
    for (ll i = 1 ; i < r + 1; ++i) {
        ans = ans / i;
    }
    return ans;
}

int main() {
    ll k;
    cin >> k;
    string s, t;
    cin >> s;
    cin >> t;

    vector<ll> card(10, k);

    ll ps = 0, pt = 0;

    vector<ll> cs(10);
    vector<ll> ct(10);

    for(ll i = 0; i < 4; i++) {
        ll lls = s[i] -  '0';
        ll llt = t[i] -  '0';
        cs[lls]++;
        ct[llt]++;
        card[lls]--;
        card[llt]--;
    }

    /*for(ll i = 1; i <= 9; i++) {
        cout << cs[i] << " " << ct[i] << endl;
    }*/

    for(ll i = 1; i <= 9; i++) {
        ps += i * pow(10, cs[i]);
        pt += i * pow(10, ct[i]);
    }

    //cout << ps << " " << pt << endl;

    ll total = 9 * k - 8;
    double ans;
    ll all = total * (total - 1);
    ll katu = 0;

    for(ll i = 1; i <= 9; i++) {
        for(ll j = 1; j <= 9; j++) {
            if((i == j && card[i]-2 >= 0) || (i != j && card[i]-1 >= 0 && card[j]-1 >= 0)) {
                ll pps = ps;
                ll ppt = pt;
                vector<ll> ccs = cs;
                vector<ll> cct = ct;
                pps -= i * pow(10, ccs[i]);
                ppt -= j * pow(10, cct[j]);
                ccs[i]++;
                cct[j]++;
                pps += i * pow(10, ccs[i]);
                ppt += j * pow(10, cct[j]);
                if(pps > ppt) {
                    /*cout << i << " " << j << " ";
                    cout << pps << " " << ppt << " ";
                    cout << k - ccs[i] + 1 << " ";
                    cout << k - cct[j] + 1 << endl;*/
                    /*if(i != j) {
                        katu += (k - ccs[i] + 1) * (k - cct[j] + 1);
                    } else {
                        katu += (k - ccs[i] + 1) * (k - cct[j]);
                    }*/
                    if(i != j) {
                        katu += card[i] * card[j];
                    } else {
                        katu += card[i] * (card[j] - 1);
                    }
                }
            }
        }
    }

    ans = (double)katu / all;

    //cout << katu << " " << all << endl;

    printf("%.16f\n", ans);



    return 0;
}