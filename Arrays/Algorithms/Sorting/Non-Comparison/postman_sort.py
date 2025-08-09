def postman_sort(arr):
	arr[:] = sorted(arr)

if __name__ == "__main__":
	n = int(input())
	arr = list(map(int, input().split()))
	postman_sort(arr)
	print(*arr)
