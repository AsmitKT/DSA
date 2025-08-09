#include <bits/stdc++.h>
using namespace std;

void partitionArray(vector<int>& arr, int x) {
	int i = 0;
	for (int j = 0; j < arr.size(); j++) {
		if (arr[j] < x) {
			swap(arr[i++], arr[j]);
		}
	}
}

int main() {
	int n, x;
	cin >> n >> x;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) cin >> arr[i];
	partitionArray(arr, x);
	for (int v : arr) cout << v << ' ';
	cout << endl;
	return 0;
}
