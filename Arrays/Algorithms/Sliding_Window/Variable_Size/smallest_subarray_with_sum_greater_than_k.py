def smallest_subarray_with_sum_greater_than_k(arr, k):
	n = len(arr)
	l = s = 0
	res = n + 1
	for r in range(n):
		s += arr[r]
		while s > k:
			res = min(res, r - l + 1)
			s -= arr[l]
			l += 1
	return 0 if res == n + 1 else res

if __name__ == "__main__":
	n, k = map(int, input().split())
	arr = list(map(int, input().split()))
	print(smallest_subarray_with_sum_greater_than_k(arr, k))
