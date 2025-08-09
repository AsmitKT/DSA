#include <bits/stdc++.h>
using namespace std;

vector<int> prefixSum(const vector<int>& arr) {
	vector<int> psum(arr.size());
	psum[0] = arr[0];
	for (int i = 1; i < arr.size(); i++) psum[i] = psum[i - 1] + arr[i];
	return psum;
}

int main() {
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) cin >> arr[i];
	vector<int> psum = prefixSum(arr);
	for (int x : psum) cout << x << ' ';
	cout << endl;
	return 0;
}
