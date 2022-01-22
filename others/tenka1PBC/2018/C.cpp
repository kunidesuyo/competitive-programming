#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

/*ll first_back(deque<ll> a) {
    deque<ll> b;
    b.push_back(a.back());
    a.pop_back();

    while(!a.empty()) {
        if(!a.empty()) b.push_front(a.front()); a.pop_front();
        if(!a.empty()) b.push_back(a.front()); a.pop_front();
        if(!a.empty()) b.push_front(a.back()); a.pop_back();
        if(!a.empty()) b.push_back(a.back()); a.pop_back();
    }
    ll v = 0;
    int n = b.size();
    for(int i = 0; i < n-1; i++) v += abs(b[i] - b[i+1]);
    return v;
}

ll first_front(deque<ll> a) {
    deque<ll> b;
    b.push_back(a.front());
    a.pop_front();

    while(!a.empty()) {
        if(!a.empty()) b.push_front(a.back()); a.pop_back();
        if(!a.empty()) b.push_back(a.back()); a.pop_back();
        if(!a.empty()) b.push_front(a.front()); a.pop_front();
        if(!a.empty()) b.push_front(a.front()); a.pop_back();
    }
    ll v = 0;
    int n = b.size();
    for(int i = 0; i < n-1; i++) v += abs(b[i] - b[i+1]);
    return v;
}*/



int main() {
    ll n;
    cin >> n;
    ll a[n];
    for(ll i = 0; i < n; i++) cin >> a[i];

    deque<ll> aa;

    sort(a, a+n);
    /*for(int i = 0; i < n; i++) {
        aa.push_back(a[i]);
    }*/

    //cout << max(first_front(aa), first_back(aa)) << endl;

    ll ans = 0;
    
    for(int i = 0; i < 2; i++) {
        deque<ll> d;
        ll small = 0;
        ll big = n-1;
        ll add = 0;
        if(i == 0) {
            d.push_back(a[big]);
            big--;
            add = i;
        } else {
            d.push_back(a[small]);
            small++;
            add = i;
        }   
        while(small <= big) {
            ll front = d.front();
            ll back = d.back();
            if(add % 2 == 0) {
                //small
                ll num1, num2;
                ll n1 = a[small];
                if(small == big) {
                    num1 = abs(n1 - front);
                    num2 = abs(n1 - back);
                    if(num1 > num2) {
                        d.push_front(n1);
                    } else {
                        d.push_back(n1);
                    }
                    break;
                }
                ll n2 = a[small+1];
                num1 = abs(n1 - front) + abs(n2 - back);
                num2 = abs(n2 - front) + abs(n1 - back);

                if(num1 > num2) {
                    d.push_front(n1);
                    d.push_back(n2);
                } else {
                    d.push_front(n2);
                    d.push_back(n1);
                }
                small += 2;
                add++;
            } else {
                ll num1, num2;
                ll n1 = a[big];
                if(small == big) {
                    num1 = abs(n1 - front);
                    num2 = abs(n1 - back);
                    if(num1 > num2) {
                        d.push_front(n1);
                    } else {
                        d.push_back(n1);
                    }
                    break;
                }
                ll n2 = a[big-1];
                num1 = abs(n1 - front) + abs(n2 - back);
                num2 = abs(n2 - front) + abs(n1 - back);

                if(num1 > num2) {
                    d.push_front(n1);
                    d.push_back(n2);
                } else {
                    d.push_front(n2);
                    d.push_back(n1);
                }
                big -= 2;
                add++;
            }
            if(small > big) break;
        }
        ll total = 0;
        for(int i = 0; i < n-1; i++) total += abs(d[i] - d[i+1]);
        ans = max(ans, total);
    }
    cout << ans << endl;

    //cout << "\n" << endl;

    /*ll ans = 0;
    ll pre = d.front();
    d.pop_front();
    //cout << pre << endl;
    while(!d.empty()) {
        ll now = d.front();
        d.pop_front();
        ans += abs(now - pre);
        pre = now;
        //cout << now << endl;
    }
    cout << ans << endl;*/

    return 0;
}