def two_pointer_search(arr, target):
	arr.sort()
	l, r = 0, len(arr) - 1
	while l < r:
		s = arr[l] + arr[r]
		if s == target:
			return True
		elif s < target:
			l += 1
		else:
			r -= 1
	return False

if __name__ == "__main__":
	n, target = map(int, input().split())
	arr = list(map(int, input().split()))
	print("Yes" if two_pointer_search(arr, target) else "No")
