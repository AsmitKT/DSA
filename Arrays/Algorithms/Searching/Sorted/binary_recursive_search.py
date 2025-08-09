def binary_search(arr, l, r, x):
	if l > r:
		return -1
	m = l + (r - l) // 2
	if arr[m] == x:
		return m
	elif arr[m] < x:
		return binary_search(arr, m + 1, r, x)
	else:
		return binary_search(arr, l, m - 1, x)

if __name__ == "__main__":
	n, x = map(int, input().split())
	arr = list(map(int, input().split()))
	print(binary_search(arr, 0, n - 1, x))
