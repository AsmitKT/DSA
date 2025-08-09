def sublist_search(arr, sub):
	n, m = len(arr), len(sub)
	for i in range(n - m + 1):
		if arr[i:i + m] == sub:
			return i
	return -1

if __name__ == "__main__":
	n, m = map(int, input().split())
	arr = list(map(int, input().split()))
	sub = list(map(int, input().split()))
	print(sublist_search(arr, sub))
