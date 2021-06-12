#include <bits/stdc++.h>

using namespace std;

int Calc(int a, int b, int c) {
	return abs(a - b) + abs(a - c) + abs(b - c);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int a, b, c;
		cin >> a >> b >> c;
		int ans = Calc(a, b, c);
		// check if the following combinations of:
		// {a - 1, a , a + 1}, {b - 1, b, b + 1}, and {c - 1, c, c + 1}
		// time complexity: O(1) per test case
		for (int da = -1; da <= 1; da++) {
			for (int db = -1; db <= 1; db++) {
				for (int dc = -1; dc <= 1; dc++){
					int na = a + da;
					int nb = b + db;
					int nc = c + dc;
					ans = min(ans, Calc(na, nb, nc));
				}
			}
		}
		cout << ans << '\n';
	}
	return 0;
}
