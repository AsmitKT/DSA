def max_sum_subarray_of_size_k(arr, k):
	window_sum = sum(arr[:k])
	max_sum = window_sum
	for i in range(k, len(arr)):
		window_sum += arr[i] - arr[i - k]
		max_sum = max(max_sum, window_sum)
	return max_sum

if __name__ == "__main__":
	n, k = map(int, input().split())
	arr = list(map(int, input().split()))
	print(max_sum_subarray_of_size_k(arr, k))
