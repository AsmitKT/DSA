# Example: Count number of ways to visit all cities (TSP DP)
def bitmask_dp(n):
	dp = [[float('inf')] * n for _ in range(1 << n)]
	dp[1][0] = 0
	for mask in range(1, 1 << n):
		for u in range(n):
			if not (mask & (1 << u)):
				continue
			for v in range(n):
				if mask & (1 << v):
					continue
				# dp[mask | (1 << v)][v] = min(dp[mask | (1 << v)][v], dp[mask][u] + cost[u][v])
	print(f"Bitmask DP table initialized for n = {n}")

if __name__ == "__main__":
	bitmask_dp(4)
