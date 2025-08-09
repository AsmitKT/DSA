#include <bits/stdc++.h>
using namespace std;

int maxSumSubarray(vector<int>& nums) {
	int max_sum = nums[0], curr_sum = nums[0];
	for (int i = 1; i < nums.size(); i++) {
		curr_sum = max(nums[i], curr_sum + nums[i]);
		max_sum = max(max_sum, curr_sum);
	}
	return max_sum;
}

int main() {
	int n;
	cin >> n;
	vector<int> nums(n);
	for (int i = 0; i < n; i++) cin >> nums[i];
	cout << maxSumSubarray(nums) << endl;
	return 0;
}
