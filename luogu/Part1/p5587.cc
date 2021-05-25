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
#define lla(x) (x).rbegin(), (x).rend()
#define mp make_pair
#define pb push_back
#define eb emplace_back

const int inf = 0x3f3f3f3f;
using ll = long long;

void run();

int main() {
#ifdef LOCAL
	// freopen("in", "r", stdin);
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
	vector<string> st;
	vector<string> cus;
	string s;
	while (getline(cin, s), s != "EOF") {
		st.eb(s);
	}
	while (getline(cin, s), s != "EOF") {
		if (s == "EOF") break;
		cus.eb(s);
	}
	int ans = 0;
	rep(i, 0, sz(st)) {
		string a = st[i], b = cus[i];
		while (1) {
			int pos = a.find('<');
			if (pos == -1) {
				break;
			} else if (pos == 0) {
				a.erase(0, 1);
			} else {
				a.erase(pos - 1, 2);
			}
		}

		while (1) {
			int pos = b.find('<');
			if (pos == -1) {
				break;
			} else if (pos == 0) {
				b.erase(0, 1);
			} else {
				b.erase(pos - 1, 2);
			}
		}
		rep(i, 0, min(len(a), len(b))) {
			if (a[i] == b[i]) ans++;
		}
	}
	int k;
	cin >> k;

	cout << round(ans * 60. / k) << endl;
}