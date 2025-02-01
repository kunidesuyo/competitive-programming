#include <bits/stdc++.h>

#include <cmath>

#define all(x) (x).begin(), (x).end()

using ll = long long;
const ll INF = 1LL << 60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  string t = "snuke";
  int h, w;
  cin >> h >> w;
  string s[h];
  for (int i = 0; i < h; i++) cin >> s[i];

  stack<pair<int, int>> st;
  vector<vector<bool>> d(h, vector<bool>(w, false));
  st.push({0, 0});
  d[0][0] = true;
  int dx[4] = {1, 0, -1, 0};
  int dy[4] = {0, 1, 0, -1};

  while (!st.empty()) {
    pair<int, int> now = st.top();
    st.pop();
    char now_char = s[now.first][now.second];
    int now_i;
    for (int i = 0; i < 5; i++) {
      if (t[i] == now_char) {
        now_i = i;
        break;
      }
    }
    char next_char = t[(now_i + 1) % 5];
    for (int i = 0; i < 4; i++) {
      pair<int, int> next = {now.first + dx[i], now.second + dy[i]};
      if (!(0 <= next.first && next.first < h && 0 <= next.second &&
            next.second < w))
        continue;
      if (s[next.first][next.second] != next_char) continue;
      if (d[next.first][next.second]) continue;
      st.push(next);
      d[next.first][next.second] = true;
    }
  }

  if (d[h - 1][w - 1]) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}