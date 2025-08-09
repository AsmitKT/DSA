#include <bits/stdc++.h>
using namespace std;

int linearSearch(const vector<int>& arr, int x) {
	for (int i = 0; i < arr.size(); i++) {
		if (arr[i] == x) return i;
	}
	return -1;
}

int main() {
	int n, x;
	cin >> n >> x;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) cin >> arr[i];
	cout << linearSearch(arr, x) << endl;
	return 0;
}
