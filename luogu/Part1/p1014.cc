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
using ll	  = long long;

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

// (1,1)
// (1,2) (2,1)
// (3,1) (2,2) (1,3)
// (1,4) (2,3) (3,2) (4,1)

void run() {
	// Code here
	int n;
	cin >> n;
	int l = 0, sum = 0;
	while (++l) {
		if (sum + l >= n) {
			break;
		}
		sum += l;
	}
	int diff = n - sum;
	// cerr << l << " " << diff << endl;
	if (l % 2) {
		cout << l - diff + 1 << "/" << diff << endl
	} else {
		cout << diff << "/" << l - diff + 1 << endl;
	}
}