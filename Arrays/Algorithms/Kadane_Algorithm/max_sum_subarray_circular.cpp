#include <bits/stdc++.h>
using namespace std;

int maxSubarraySumCircular(vector<int>& nums) {
	int total = 0, max_sum = nums[0], curr_max = 0, min_sum = nums[0], curr_min = 0;
	for (int n : nums) {
		curr_max = max(n, curr_max + n);
		max_sum = max(max_sum, curr_max);
		curr_min = min(n, curr_min + n);
		min_sum = min(min_sum, curr_min);
		total += n;
	}
	if (max_sum < 0) return max_sum;
	return max(max_sum, total - min_sum);
}

int main() {
	int n;
	cin >> n;
	vector<int> nums(n);
	for (int i = 0; i < n; i++) cin >> nums[i];
	cout << maxSubarraySumCircular(nums) << endl;
	return 0;
}
