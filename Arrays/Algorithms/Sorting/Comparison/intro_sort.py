def intro_sort(arr):
	arr[:] = sorted(arr)

if __name__ == "__main__":
	n = int(input())
	arr = list(map(int, input().split()))
	intro_sort(arr)
	print(*arr)
