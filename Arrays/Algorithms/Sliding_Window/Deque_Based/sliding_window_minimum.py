from collections import deque

def sliding_window_minimum(arr, k):
	dq = deque()
	res = []
	for i in range(len(arr)):
		while dq and dq[0] <= i - k:
			dq.popleft()
		while dq and arr[dq[-1]] > arr[i]:
			dq.pop()
		dq.append(i)
		if i >= k - 1:
			res.append(arr[dq[0]])
	return res

if __name__ == "__main__":
	n, k = map(int, input().split())
	arr = list(map(int, input().split()))
	print(*sliding_window_minimum(arr, k))
