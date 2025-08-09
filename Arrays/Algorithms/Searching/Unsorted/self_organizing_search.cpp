#include <bits/stdc++.h>
using namespace std;

int selfOrganizingSearch(vector<int>& arr, int x) {
	for (int i = 0; i < arr.size(); i++) {
		if (arr[i] == x) {
			if (i > 0) swap(arr[i], arr[i - 1]);
			return i;
		}
	}
	return -1;
}

int main() {
	int n, x;
	cin >> n >> x;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) cin >> arr[i];
	cout << selfOrganizingSearch(arr, x) << endl;
	for (int v : arr) cout << v << ' ';
	cout << endl;
	return 0;
}
