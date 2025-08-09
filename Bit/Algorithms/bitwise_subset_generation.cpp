#include <bits/stdc++.h>
using namespace std;

void generateSubsets(vector<int>& nums) {
	int n = nums.size();
	int total = 1 << n;
	for (int mask = 0; mask < total; ++mask) {
		vector<int> subset;
		for (int i = 0; i < n; ++i) {
			if (mask & (1 << i)) subset.push_back(nums[i]);
		}
		cout << "{";
		for (int i = 0; i < subset.size(); ++i) {
			cout << subset[i] << (i + 1 < subset.size() ? ", " : "");
		}
		cout << "}\n";
	}
}

int main() {
	vector<int> nums = {1, 2, 3};
	generateSubsets(nums);
	return 0;
}
