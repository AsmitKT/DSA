def bucket_sort(arr):
	n = len(arr)
	buckets = [[] for _ in range(n)]
	for x in arr:
		idx = int(n * x)
		buckets[idx].append(x)
	for bucket in buckets:
		bucket.sort()
	idx = 0
	for bucket in buckets:
		for v in bucket:
			arr[idx] = v
			idx += 1

if __name__ == "__main__":
	n = int(input())
	arr = list(map(float, input().split()))
	bucket_sort(arr)
	print(*[f"{x:.5f}" for x in arr])
