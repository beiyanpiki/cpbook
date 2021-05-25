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
	string s;
	cin >> s;
	int cnt = 1, sum = 0;
	rep(i, 0, 12) {
		char c = s[i];
		if (c == '-') continue;
		sum += cnt * (c - '0');
		++cnt;
	}
	int q = sum % 11;
	if (q == s[12] - '0' || (q == 10 && s[12] == 'X')) {
		cout << "Right" << endl;
	} else {
		rep(i, 0, 12) cout << s[i];
		if (q < 10) {
			cout << q << endl;
		} else {
			cout << "X" << endl;
		}
	}
}