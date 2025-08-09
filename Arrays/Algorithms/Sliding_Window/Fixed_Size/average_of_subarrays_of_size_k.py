def average_of_subarrays_of_size_k(arr, k):
	window_sum = sum(arr[:k])
	res = [window_sum / k]
	for i in range(k, len(arr)):
		window_sum += arr[i] - arr[i - k]
		res.append(window_sum / k)
	return res

if __name__ == "__main__":
	n, k = map(int, input().split())
	arr = list(map(int, input().split()))
	print(*[f"{x:.5f}" for x in average_of_subarrays_of_size_k(arr, k)])
