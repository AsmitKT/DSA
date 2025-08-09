def binary_search(arr, l, r, x):
	while l <= r:
		m = l + (r - l) // 2
		if arr[m] == x:
			return m
		elif arr[m] < x:
			l = m + 1
		else:
			r = m - 1
	return -1

def exponential_search(arr, x):
	n = len(arr)
	if arr[0] == x:
		return 0
	i = 1
	while i < n and arr[i] <= x:
		i *= 2
	return binary_search(arr, i // 2, min(i, n - 1), x)

if __name__ == "__main__":
	n, x = map(int, input().split())
	arr = list(map(int, input().split()))
	print(exponential_search(arr, x))
