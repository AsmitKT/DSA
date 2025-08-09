#include <bits/stdc++.h>
using namespace std;

// Example: Find if there exists a pair with given sum
bool twoPointerSearch(vector<int>& arr, int target) {
	sort(arr.begin(), arr.end());
	int l = 0, r = arr.size() - 1;
	while (l < r) {
		int sum = arr[l] + arr[r];
		if (sum == target) return true;
		if (sum < target) l++;
		else r--;
	}
	return false;
}

int main() {
	int n, target;
	cin >> n >> target;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) cin >> arr[i];
	cout << (twoPointerSearch(arr, target) ? "Yes" : "No") << endl;
	return 0;
}
