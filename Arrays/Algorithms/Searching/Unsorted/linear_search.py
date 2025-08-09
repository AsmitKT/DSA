def linear_search(arr, x):
	for i, v in enumerate(arr):
		if v == x:
			return i
	return -1

if __name__ == "__main__":
	n, x = map(int, input().split())
	arr = list(map(int, input().split()))
	print(linear_search(arr, x))
