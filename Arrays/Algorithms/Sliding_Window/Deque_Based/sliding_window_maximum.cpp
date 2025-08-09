#include <bits/stdc++.h>
using namespace std;

vector<int> slidingWindowMaximum(const vector<int>& arr, int k) {
	deque<int> dq;
	vector<int> res;
	for (int i = 0; i < arr.size(); i++) {
		while (!dq.empty() && dq.front() <= i - k) dq.pop_front();
		while (!dq.empty() && arr[dq.back()] < arr[i]) dq.pop_back();
		dq.push_back(i);
		if (i >= k - 1) res.push_back(arr[dq.front()]);
	}
	return res;
}

int main() {
	int n, k;
	cin >> n >> k;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) cin >> arr[i];
	vector<int> res = slidingWindowMaximum(arr, k);
	for (int x : res) cout << x << ' ';
	cout << endl;
	return 0;
}
