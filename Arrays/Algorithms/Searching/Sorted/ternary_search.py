def ternary_search(arr, x):
	l, r = 0, len(arr) - 1
	while l <= r:
		mid1 = l + (r - l) // 3
		mid2 = r - (r - l) // 3
		if arr[mid1] == x:
			return mid1
		if arr[mid2] == x:
			return mid2
		if x < arr[mid1]:
			r = mid1 - 1
		elif x > arr[mid2]:
			l = mid2 + 1
		else:
			l = mid1 + 1
			r = mid2 - 1
	return -1

if __name__ == "__main__":
	n, x = map(int, input().split())
	arr = list(map(int, input().split()))
	print(ternary_search(arr, x))
