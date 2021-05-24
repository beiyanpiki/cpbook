#include <bits/stdc++.h>

using namespace std;

#define rep(i, x, y) \
	for (decay<decltype(y)>::type i = (x), _##i = (y); i < _##i; ++i)
#define repn(i, x, y) \
	for (decay<decltype(y)>::type i = (x), _##i = (y); i <= _##i; ++i)
#define per(i, x, y) \
	for (decay<decltype(x)>::type i = (x), _##i = (y); i > _##i; --i)
#define ElainaMyWife                  \
	std::ios::sync_with_stdio(false); \
	cin.tie(nullptr);                 \
	cout.tie(nullptr);
#define endl '\n';
#define fi first
#define se second
#define sz(x) ((int)(x).size())
#define len(x) ((int)(x).length())
#define all(x) (x).begin(), (x).end()
#define lla(x) (x).begin(), (x).end()
#define mp make_pair
#define pb push_back
#define eb emplace_back

const int inf = 0x3f3f3f3f;
using ll = long long;

void run();

int main() {
#ifdef LOCAL
	freopen("in", "r", stdin);
#endif
	ElainaMyWife;
	int T = 1;
	// cin >> T;
	while (T--) {
		run();
	}
}

const int maxn = 1e5 + 5;

void run() {
	// Code here
	int n, m, k;
	cin >> n >> m >> k;
	bool a[1005][1005] = {false};
	rep(_, 0, n) {
		rep(i, 0, m) {
			int x;
			cin >> x;
			a[x - 1][i] = true;
		}
	}
	rep(i, 0, k) {
		if (i) cout << " ";
		int cnt = 0;
		rep(j, 0, m) {
			if (a[i][j]) {
				cnt++;
			}
		}
		cout << cnt;
	}
	cout << endl;
}