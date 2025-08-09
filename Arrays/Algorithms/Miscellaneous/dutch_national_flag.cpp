#include <bits/stdc++.h>
using namespace std;

void dutchNationalFlag(vector<int>& arr) {
	int low = 0, mid = 0, high = arr.size() - 1;
	while (mid <= high) {
		if (arr[mid] == 0) {
			swap(arr[low++], arr[mid++]);
		} else if (arr[mid] == 1) {
			mid++;
		} else {
			swap(arr[mid], arr[high--]);
		}
	}
}

int main() {
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) cin >> arr[i];
	dutchNationalFlag(arr);
	for (int x : arr) cout << x << ' ';
	cout << endl;
	return 0;
}
