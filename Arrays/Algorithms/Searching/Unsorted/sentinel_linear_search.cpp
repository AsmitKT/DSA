#include <bits/stdc++.h>
using namespace std;

int sentinelLinearSearch(vector<int>& arr, int x) {
	int n = arr.size();
	arr.push_back(x);
	int i = 0;
	while (arr[i] != x) i++;
	arr.pop_back();
	if (i < n) return i;
	return -1;
}

int main() {
	int n, x;
	cin >> n >> x;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) cin >> arr[i];
	cout << sentinelLinearSearch(arr, x) << endl;
	return 0;
}
