def sentinel_linear_search(arr, x):
	n = len(arr)
	arr.append(x)
	i = 0
	while arr[i] != x:
		i += 1
	arr.pop()
	if i < n:
		return i
	return -1

if __name__ == "__main__":
	n, x = map(int, input().split())
	arr = list(map(int, input().split()))
	print(sentinel_linear_search(arr, x))
