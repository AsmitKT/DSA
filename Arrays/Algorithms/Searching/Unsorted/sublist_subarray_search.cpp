#include <bits/stdc++.h>
using namespace std;

int sublistSearch(const vector<int>& arr, const vector<int>& sub) {
	int n = arr.size(), m = sub.size();
	for (int i = 0; i <= n - m; i++) {
		int j = 0;
		while (j < m && arr[i + j] == sub[j]) j++;
		if (j == m) return i;
	}
	return -1;
}

int main() {
	int n, m;
	cin >> n >> m;
	vector<int> arr(n), sub(m);
	for (int i = 0; i < n; i++) cin >> arr[i];
	for (int i = 0; i < m; i++) cin >> sub[i];
	cout << sublistSearch(arr, sub) << endl;
	return 0;
}
