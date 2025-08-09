def generate_subsets(nums):
	n = len(nums)
	total = 1 << n
	for mask in range(total):
		subset = [nums[i] for i in range(n) if mask & (1 << i)]
		print(subset)

if __name__ == "__main__":
	nums = [1, 2, 3]
	generate_subsets(nums)
