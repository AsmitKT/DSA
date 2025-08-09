#include <bits/stdc++.h>
using namespace std;

void bucketSort(vector<float>& arr) {
	int n = arr.size();
	vector<vector<float>> buckets(n);
	for (int i = 0; i < n; i++) {
		int idx = n * arr[i];
		buckets[idx].push_back(arr[i]);
	}
	for (int i = 0; i < n; i++) sort(buckets[i].begin(), buckets[i].end());
	int idx = 0;
	for (int i = 0; i < n; i++) {
		for (float v : buckets[i]) arr[idx++] = v;
	}
}

int main() {
	int n;
	cin >> n;
	vector<float> arr(n);
	for (int i = 0; i < n; i++) cin >> arr[i];
	bucketSort(arr);
	for (float x : arr) cout << fixed << setprecision(5) << x << ' ';
	cout << endl;
	return 0;
}
