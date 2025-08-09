def pigeonhole_sort(arr):
	min_val = min(arr)
	max_val = max(arr)
	size = max_val - min_val + 1
	holes = [0] * size
	for x in arr:
		holes[x - min_val] += 1
	idx = 0
	for i in range(size):
		while holes[i] > 0:
			arr[idx] = i + min_val
			idx += 1
			holes[i] -= 1

if __name__ == "__main__":
	n = int(input())
	arr = list(map(int, input().split()))
	pigeonhole_sort(arr)
	print(*arr)
