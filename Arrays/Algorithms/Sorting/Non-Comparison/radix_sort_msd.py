def msd_radix_sort(arr, exp):
	if len(arr) <= 1 or exp == 0:
		return arr
	buckets = [[] for _ in range(10)]
	for num in arr:
		buckets[(num // exp) % 10].append(num)
	res = []
	for bucket in buckets:
		if exp > 1:
			res.extend(msd_radix_sort(bucket, exp // 10))
		else:
			res.extend(bucket)
	return res

def radix_sort_msd(arr):
	if not arr:
		return
	max_val = max(arr)
	exp = 1
	while max_val // exp >= 10:
		exp *= 10
	res = msd_radix_sort(arr, exp)
	for i in range(len(arr)):
		arr[i] = res[i]

if __name__ == "__main__":
	n = int(input())
	arr = list(map(int, input().split()))
	radix_sort_msd(arr)
	print(*arr)
