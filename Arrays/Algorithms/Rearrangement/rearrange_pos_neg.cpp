#include <bits/stdc++.h>
using namespace std;

void rearrangePosNeg(vector<int>& arr) {
	int n = arr.size();
	int i = -1;
	for (int j = 0; j < n; j++) {
		if (arr[j] < 0) swap(arr[++i], arr[j]);
	}
}

int main() {
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) cin >> arr[i];
	rearrangePosNeg(arr);
	for (int x : arr) cout << x << ' ';
	cout << endl;
	return 0;
}
