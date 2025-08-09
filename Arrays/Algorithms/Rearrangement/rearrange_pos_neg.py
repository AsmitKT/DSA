def rearrange_pos_neg(arr):
	i = -1
	for j in range(len(arr)):
		if arr[j] < 0:
			i += 1
			arr[i], arr[j] = arr[j], arr[i]

if __name__ == "__main__":
	n = int(input())
	arr = list(map(int, input().split()))
	rearrange_pos_neg(arr)
	print(*arr)
