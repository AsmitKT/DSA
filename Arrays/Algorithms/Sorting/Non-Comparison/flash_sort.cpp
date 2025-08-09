#include <bits/stdc++.h>
using namespace std;

void flashSort(vector<int>& arr) {
	int n = arr.size();
	if (n == 0) return;
	int min_val = *min_element(arr.begin(), arr.end());
	int max_val = *max_element(arr.begin(), arr.end());
	if (min_val == max_val) return;
	int m = int(0.43 * n) + 1;
	vector<int> l(m, 0);
	for (int i = 0; i < n; i++) l[int((m - 1) * (arr[i] - min_val) / double(max_val - min_val))]++;
	for (int i = 1; i < m; i++) l[i] += l[i - 1];
	int count = 0, i = 0, k = m - 1;
	while (count < n) {
		while (i >= l[k]) k = int((m - 1) * (arr[i] - min_val) / double(max_val - min_val));
		int evicted = arr[i];
		while (i != l[k]) {
			k = int((m - 1) * (evicted - min_val) / double(max_val - min_val));
			swap(evicted, arr[--l[k]]);
			count++;
		}
		i++;
		count++;
	}
	for (int k = 1; k < m; k++) {
		int left = l[k - 1], right = l[k] - 1;
		sort(arr.begin() + left, arr.begin() + right + 1);
	}
}

int main() {
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) cin >> arr[i];
	flashSort(arr);
	for (int x : arr) cout << x << ' ';
	cout << endl;
	return 0;
}
