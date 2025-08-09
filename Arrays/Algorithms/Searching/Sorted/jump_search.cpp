#include <bits/stdc++.h>
using namespace std;

int jumpSearch(const vector<int>& arr, int x) {
	int n = arr.size();
	int step = sqrt(n);
	int prev = 0;
	while (arr[min(step, n) - 1] < x) {
		prev = step;
		step += sqrt(n);
		if (prev >= n) return -1;
	}
	while (arr[prev] < x) {
		prev++;
		if (prev == min(step, n)) return -1;
	}
	if (arr[prev] == x) return prev;
	return -1;
}

int main() {
	int n, x;
	cin >> n >> x;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) cin >> arr[i];
	cout << jumpSearch(arr, x) << endl;
	return 0;
}
