def max_subarray_sum_circular(nums):
	total = 0
	max_sum = curr_max = nums[0]
	min_sum = curr_min = nums[0]
	for n in nums:
		curr_max = max(n, curr_max + n)
		max_sum = max(max_sum, curr_max)
		curr_min = min(n, curr_min + n)
		min_sum = min(min_sum, curr_min)
		total += n
	if max_sum < 0:
		return max_sum
	return max(max_sum, total - min_sum)

if __name__ == "__main__":
	n = int(input())
	nums = list(map(int, input().split()))
	print(max_subarray_sum_circular(nums))
