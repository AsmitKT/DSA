#include <bits/stdc++.h>
using namespace std;

// Example: Count number of ways to visit all cities (TSP DP)
int main() {
	int n = 4;
	vector<vector<int>> dp(1 << n, vector<int>(n, INT_MAX));
	dp[1][0] = 0;
	for (int mask = 1; mask < (1 << n); ++mask) {
		for (int u = 0; u < n; ++u) {
			if (!(mask & (1 << u))) continue;
			for (int v = 0; v < n; ++v) {
				if (mask & (1 << v)) continue;
				// dp[mask | (1 << v)][v] = min(dp[mask | (1 << v)][v], dp[mask][u] + cost[u][v]);
			}
		}
	}
	cout << "Bitmask DP table initialized for n = " << n << endl;
	return 0;
}
