def block_search(arr, x, block_size):
	n = len(arr)
	i = 0
	while i < n and arr[min(i + block_size - 1, n - 1)] < x:
		i += block_size
	for j in range(i, min(i + block_size, n)):
		if arr[j] == x:
			return j
	return -1

if __name__ == "__main__":
	n, x, block_size = map(int, input().split())
	arr = list(map(int, input().split()))
	print(block_search(arr, x, block_size))
