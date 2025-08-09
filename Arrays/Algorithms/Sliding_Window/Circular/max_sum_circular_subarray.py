def max_sum_circular_subarray(arr, k):
	n = len(arr)
	max_sum = float('-inf')
	for i in range(n):
		curr_sum = 0
		for j in range(k):
			curr_sum += arr[(i + j) % n]
		max_sum = max(max_sum, curr_sum)
	return max_sum

if __name__ == "__main__":
	n, k = map(int, input().split())
	arr = list(map(int, input().split()))
	print(max_sum_circular_subarray(arr, k))
