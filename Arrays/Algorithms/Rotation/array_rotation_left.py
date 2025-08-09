def left_rotate(arr, d):
	n = len(arr)
	d = d % n
	arr[:] = arr[d:] + arr[:d]

if __name__ == "__main__":
	n, d = map(int, input().split())
	arr = list(map(int, input().split()))
	left_rotate(arr, d)
	print(*arr)
