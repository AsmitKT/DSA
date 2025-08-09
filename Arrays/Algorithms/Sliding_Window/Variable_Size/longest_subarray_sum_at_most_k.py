def longest_subarray_sum_at_most_k(arr, k):
	l = s = res = 0
	for r in range(len(arr)):
		s += arr[r]
		while s > k and l <= r:
			s -= arr[l]
			l += 1
		res = max(res, r - l + 1)
	return res

if __name__ == "__main__":
	n, k = map(int, input().split())
	arr = list(map(int, input().split()))
	print(longest_subarray_sum_at_most_k(arr, k))
