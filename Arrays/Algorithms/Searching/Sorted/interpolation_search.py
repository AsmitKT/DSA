def interpolation_search(arr, x):
	l, r = 0, len(arr) - 1
	while l <= r and x >= arr[l] and x <= arr[r]:
		if l == r:
			if arr[l] == x:
				return l
			return -1
		pos = l + int(((r - l) / (arr[r] - arr[l])) * (x - arr[l]))
		if arr[pos] == x:
			return pos
		elif arr[pos] < x:
			l = pos + 1
		else:
			r = pos - 1
	return -1

if __name__ == "__main__":
	n, x = map(int, input().split())
	arr = list(map(int, input().split()))
	print(interpolation_search(arr, x))
