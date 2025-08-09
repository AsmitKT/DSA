#include <bits/stdc++.h>
using namespace std;

void leftRotate(vector<int>& arr, int d) {
	int n = arr.size();
	d = d % n;
	reverse(arr.begin(), arr.begin() + d);
	reverse(arr.begin() + d, arr.end());
	reverse(arr.begin(), arr.end());
}

int main() {
	int n, d;
	cin >> n >> d;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) cin >> arr[i];
	leftRotate(arr, d);
	for (int x : arr) cout << x << ' ';
	cout << endl;
	return 0;
}
