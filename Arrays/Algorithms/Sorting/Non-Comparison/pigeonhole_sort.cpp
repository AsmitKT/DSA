#include <bits/stdc++.h>
using namespace std;

void pigeonholeSort(vector<int>& arr) {
	int min_val = *min_element(arr.begin(), arr.end());
	int max_val = *max_element(arr.begin(), arr.end());
	int size = max_val - min_val + 1;
	vector<int> holes(size, 0);
	for (int x : arr) holes[x - min_val]++;
	int idx = 0;
	for (int i = 0; i < size; i++) {
		while (holes[i]-- > 0) arr[idx++] = i + min_val;
	}
}

int main() {
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) cin >> arr[i];
	pigeonholeSort(arr);
	for (int x : arr) cout << x << ' ';
	cout << endl;
	return 0;
}
