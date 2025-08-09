#include <bits/stdc++.h>
using namespace std;

void circularWindowRotation(vector<int>& arr, int k) {
	int n = arr.size();
	k = k % n;
	rotate(arr.rbegin(), arr.rbegin() + k, arr.rend());
}

int main() {
	int n, k;
	cin >> n >> k;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) cin >> arr[i];
	circularWindowRotation(arr, k);
	for (int x : arr) cout << x << ' ';
	cout << endl;
	return 0;
}
