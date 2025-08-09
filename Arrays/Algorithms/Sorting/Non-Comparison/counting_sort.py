def counting_sort(arr):
	max_val = max(arr)
	min_val = min(arr)
	range_ = max_val - min_val + 1
	count = [0] * range_
	output = [0] * len(arr)
	for x in arr:
		count[x - min_val] += 1
	for i in range(1, range_):
		count[i] += count[i - 1]
	for i in range(len(arr) - 1, -1, -1):
		output[count[arr[i] - min_val] - 1] = arr[i]
		count[arr[i] - min_val] -= 1
	for i in range(len(arr)):
		arr[i] = output[i]

if __name__ == "__main__":
	n = int(input())
	arr = list(map(int, input().split()))
	counting_sort(arr)
	print(*arr)
