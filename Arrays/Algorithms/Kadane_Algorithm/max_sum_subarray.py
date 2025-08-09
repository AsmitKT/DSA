def max_sum_subarray(nums):
	max_sum = curr_sum = nums[0]
	for num in nums[1:]:
		curr_sum = max(num, curr_sum + num)
		max_sum = max(max_sum, curr_sum)
	return max_sum

if __name__ == "__main__":
	n = int(input())
	nums = list(map(int, input().split()))
	print(max_sum_subarray(nums))
