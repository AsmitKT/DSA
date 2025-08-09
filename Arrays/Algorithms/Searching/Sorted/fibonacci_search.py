def fibonacci_search(arr, x):
	n = len(arr)
	fibMMm2, fibMMm1 = 0, 1
	fibM = fibMMm2 + fibMMm1
	while fibM < n:
		fibMMm2, fibMMm1 = fibMMm1, fibM
		fibM = fibMMm2 + fibMMm1
	offset = -1
	while fibM > 1:
		i = min(offset + fibMMm2, n - 1)
		if arr[i] < x:
			fibM = fibMMm1
			fibMMm1 = fibMMm2
			fibMMm2 = fibM - fibMMm1
			offset = i
		elif arr[i] > x:
			fibM = fibMMm2
			fibMMm1 = fibMMm1 - fibMMm2
			fibMMm2 = fibM - fibMMm1
		else:
			return i
	if fibMMm1 and offset + 1 < n and arr[offset + 1] == x:
		return offset + 1
	return -1

if __name__ == "__main__":
	n, x = map(int, input().split())
	arr = list(map(int, input().split()))
	print(fibonacci_search(arr, x))
