def flash_sort(arr):
	n = len(arr)
	if n == 0:
		return
	min_val = min(arr)
	max_val = max(arr)
	if min_val == max_val:
		return
	m = int(0.43 * n) + 1
	l = [0] * m
	for x in arr:
		idx = int((m - 1) * (x - min_val) / (max_val - min_val))
		l[idx] += 1
	for i in range(1, m):
		l[i] += l[i - 1]
	count = i = 0
	k = m - 1
	while count < n:
		while i >= l[k]:
			k = int((m - 1) * (arr[i] - min_val) / (max_val - min_val))
		evicted = arr[i]
		while i != l[k]:
			k = int((m - 1) * (evicted - min_val) / (max_val - min_val))
			arr[l[k] - 1], evicted = evicted, arr[l[k] - 1]
			l[k] -= 1
			count += 1
		i += 1
		count += 1
	for k in range(1, m):
		left, right = l[k - 1], l[k] - 1
		arr[left:right + 1] = sorted(arr[left:right + 1])

if __name__ == "__main__":
	n = int(input())
	arr = list(map(int, input().split()))
	flash_sort(arr)
	print(*arr)
