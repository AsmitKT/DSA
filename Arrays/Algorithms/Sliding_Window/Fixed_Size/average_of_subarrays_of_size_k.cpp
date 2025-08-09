#include <bits/stdc++.h>
using namespace std;

vector<double> averageOfSubarraysOfSizeK(const vector<int>& arr, int k) {
	int n = arr.size();
	vector<double> res;
	double window_sum = 0;
	for (int i = 0; i < k; i++) window_sum += arr[i];
	res.push_back(window_sum / k);
	for (int i = k; i < n; i++) {
		window_sum += arr[i] - arr[i - k];
		res.push_back(window_sum / k);
	}
	return res;
}

int main() {
	int n, k;
	cin >> n >> k;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) cin >> arr[i];
	vector<double> res = averageOfSubarraysOfSizeK(arr, k);
	for (double x : res) cout << fixed << setprecision(5) << x << ' ';
	cout << endl;
	return 0;
}
