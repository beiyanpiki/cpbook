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
	// freopen("in", "r", stdin);
#endif
	// ElainaMyWife;
	int T = 1;
	// cin >> T;
	while (T--) {
		run();
	}
}

const int maxn = 1e5 + 5;

bool check(string s) {
	rep(i, 0, 4) {
		if (s[i] != s[7 - i]) {
			return false;
		}
	}
	return true;
}

int str2int(string s) {
	int cnt = 0;
	rep(i, 0, len(s)) {
		cnt *= 10;
		cnt += s[i] - '0';
	}
	return cnt;
}

string int2str(int n, int leng) {
	string s;
	while (n) {
		int q = n % 10;
		char c = q + '0';
		s = c + s;
		n /= 10;
	}
	if (len(s) < leng) {
		rep(i, len(s), leng) { s = '0' + s; }
	}
	return s;
}

string nextday(string cur) {
	int yy = str2int(cur.substr(0, 4));
	int mm = str2int(cur.substr(4, 2));
	int dd = str2int(cur.substr(6, 2));
	bool cy = ((yy % 4 == 0) && (yy % 100 != 0)) || (yy % 400 == 0);
	dd++;
	if (dd == 32 && (mm == 1 || mm == 3 || mm == 5 || mm == 7 || mm == 8 ||
					 mm == 10 || mm == 12)) {
		dd = 1;
		mm++;
	} else if (dd == 31 && (mm == 4 || mm == 6 || mm == 9 || mm == 11)) {
		dd = 1;
		mm++;
	} else if (dd == 30 && mm == 2 && cy) {
		dd = 1;
		mm++;
	} else if (dd == 29 && mm == 2 && !cy) {
		dd = 1;
		mm++;
	}
	if (mm == 13) {
		yy++;
		mm = 1;
	}
	cur = int2str(yy, 4) + int2str(mm, 2) + int2str(dd, 2);
	return cur;
}

void run() {
	// Code here
	string a, b;
	cin >> a >> b;
	int res = 0;
	string cur = a;
	while (cur != b) {
		if (check(cur)) {
			res++;
		}
		cur = nextday(cur);
	}
	if (check(cur)) res++;

	cout << res << endl;
}