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
#define endl '\n'
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
	string a, b;
	getline(cin, a);
	getline(cin, b);
	transform(all(a), a.begin(), ::tolower);
	transform(all(b), b.begin(), ::tolower);
	cerr << a << endl << b << endl;
	int cnt = 0, pos = -1, pt = -1;
	string ss;
	rep(i, 0, len(b)) {
		char c = b[i];
		if (c == ' ') {
			if (ss == a) {
				cnt++;
				if (pos == -1) pos = pt;
			}
			ss = "";
			pt = -1;
		} else {
			ss += c;
			if (pt == -1) pt = i;
		}
	}
	if (cnt) {
		cout << cnt << " " << pos << endl;
	} else {
		cout << -1 << endl;
	}
}