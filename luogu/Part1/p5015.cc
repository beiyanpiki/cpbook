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
	string aa;
	while (T--) {
		run();
	}
}

const int maxn = 1e5 + 5;

void run() {
	// Code here
	string s;
	int cnt = 0;
	getline(cin, s);
	for (auto c : s) {
		if (c >= 'a' && c <= 'z') {
			cnt++;
		} else if (c >= 'A' && c <= 'Z') {
			cnt++;
		} else if (c >= '0' && c <= '9') {
			cnt++;
		}
	}

	cout << cnt << endl;
}