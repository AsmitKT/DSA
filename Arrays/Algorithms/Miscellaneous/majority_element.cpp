#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums) {
	int count = 0, candidate = 0;
	for (int num : nums) {
		if (count == 0) candidate = num;
		count += (num == candidate) ? 1 : -1;
	}
	count = 0;
	for (int num : nums) if (num == candidate) count++;
	return (count > nums.size() / 2) ? candidate : -1;
}

int main() {
	int n;
	cin >> n;
	vector<int> nums(n);
	for (int i = 0; i < n; i++) cin >> nums[i];
	cout << majorityElement(nums) << endl;
	return 0;
}
