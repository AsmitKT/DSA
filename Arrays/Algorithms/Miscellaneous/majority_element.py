def majority_element(nums):
	count = 0
	candidate = None
	for num in nums:
		if count == 0:
			candidate = num
		count += (1 if num == candidate else -1)
	if nums.count(candidate) > len(nums) // 2:
		return candidate
	return -1

if __name__ == "__main__":
	n = int(input())
	nums = list(map(int, input().split()))
	print(majority_element(nums))
