def partition_array(arr, x):
	i = 0
	for j in range(len(arr)):
		if arr[j] < x:
			arr[i], arr[j] = arr[j], arr[i]
			i += 1

if __name__ == "__main__":
	n, x = map(int, input().split())
	arr = list(map(int, input().split()))
	partition_array(arr, x)
	print(*arr)
