def prefix_sum(arr):
	psum = [0] * len(arr)
	psum[0] = arr[0]
	for i in range(1, len(arr)):
		psum[i] = psum[i - 1] + arr[i]
	return psum

if __name__ == "__main__":
	n = int(input())
	arr = list(map(int, input().split()))
	print(*prefix_sum(arr))
