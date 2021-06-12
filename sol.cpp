#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		vector<long long> a(3);
		cin >> a[0] >> a[1] >> a[2];
		// sort the three numbers in non-decreasing order
		sort(a.begin(), a.end());
		if (a[0] < a[1] && a[1] < a[2]) {
			// if a[0] is less than a[1] and a[1] is also less than a[2],
			// then increment a[0] and decrement a[2]
			a[0]++;
			a[2]--;
		} else if (a[0] < a[1] && a[1] == a[2]) {
			// if a[0] is less than a[1] and a[1] is equal to a[2], then increment a[0]
			a[0]++;
			// check if a[1] (and a[2] as well since a[1] == a[2]) is still greater than a[0]
			if (a[1] > a[0]) {
				// if yes, then decrement both a[1] and a[2]
				a[1]--;
				a[2]--;
			}
		} else if (a[0] == a[1] && a[1] < a[2]) {
			// if a[0] is equal to a[1] and a[1] is less than a[2], then increment both a[0] and a[1]
			a[0]++;
			a[1]++;
			// check if a[1] (and a[0] as well since a[1] == a[0]) is still less than a[2]
			if (a[0] == a[1] && a[1] < a[2]) {
				// if yes, then decrement a[2]
				a[2]--;
			}
		}
		// calculate the total pairwise distance (based on problem statement)
		cout << abs(a[0] - a[1]) + abs(a[0] - a[2]) + abs(a[1] - a[2]) << '\n';
	}
	return 0;
}
