import math

def meta_binary_search(arr, x):
	n = len(arr)
	lg = int(math.log2(n)) + 1
	pos = -1
	for i in range(lg, -1, -1):
		new_pos = pos + (1 << i)
		if new_pos < n and arr[new_pos] <= x:
			pos = new_pos
	if pos != -1 and arr[pos] == x:
		return pos
	return -1

if __name__ == "__main__":
	n, x = map(int, input().split())
	arr = list(map(int, input().split()))
	print(meta_binary_search(arr, x))
