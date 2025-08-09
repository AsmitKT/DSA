def circular_window_rotation(arr, k):
	n = len(arr)
	k = k % n
	arr[:] = arr[-k:] + arr[:-k]

if __name__ == "__main__":
	n, k = map(int, input().split())
	arr = list(map(int, input().split()))
	circular_window_rotation(arr, k)
	print(*arr)
