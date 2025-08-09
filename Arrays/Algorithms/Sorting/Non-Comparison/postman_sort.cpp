#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) cin >> arr[i];
	stable_sort(arr.begin(), arr.end());
	for (int x : arr) cout << x << ' ';
	cout << endl;
	return 0;
}
