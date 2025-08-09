def self_organizing_search(arr, x):
	for i in range(len(arr)):
		if arr[i] == x:
			if i > 0:
				arr[i], arr[i - 1] = arr[i - 1], arr[i]
			return i
	return -1

if __name__ == "__main__":
	n, x = map(int, input().split())
	arr = list(map(int, input().split()))
	print(self_organizing_search(arr, x))
	print(*arr)
