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

void run() {
	// Code here
	int n;
	cin >> n;
	vector<int> a(n);
	set<int> b;
	set<int> c;
	rep(i, 0, n) { cin >> a[i]; }
	b.insert(all(a));
	int res = 0;
	rep(i, 0, n) {
		rep(j, 0, n) {
			if (i == j) {
				continue;
			}
			c.insert(a[i] + a[j]);
		}
	}
	for (auto cc : c) {
		auto x = b.find(cc);
		if (x != b.end()) {
			res++;
		}
	}
	cout << res << endl;
}