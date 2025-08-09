def apply_operation(diff, l, r, x):
	diff[l] += x
	if r + 1 < len(diff):
		diff[r + 1] -= x

def get_array_from_diff(diff):
	res = [0] * len(diff)
	res[0] = diff[0]
	for i in range(1, len(diff)):
		res[i] = res[i - 1] + diff[i]
	return res

if __name__ == "__main__":
	n, q = map(int, input().split())
	arr = list(map(int, input().split()))
	diff = [0] * (n + 1)
	for i in range(n):
		diff[i] = arr[i] - (arr[i - 1] if i else 0)
	for _ in range(q):
		l, r, x = map(int, input().split())
		apply_operation(diff, l, r, x)
	res = get_array_from_diff(diff)
	print(*res[:n])
