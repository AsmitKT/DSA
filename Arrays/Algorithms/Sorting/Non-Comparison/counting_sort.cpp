#include <bits/stdc++.h>
using namespace std;

void countingSort(vector<int>& arr) {
	int max_val = *max_element(arr.begin(), arr.end());
	int min_val = *min_element(arr.begin(), arr.end());
	int range = max_val - min_val + 1;
	vector<int> count(range, 0), output(arr.size());
	for (int x : arr) count[x - min_val]++;
	for (int i = 1; i < range; i++) count[i] += count[i - 1];
	for (int i = arr.size() - 1; i >= 0; i--) {
		output[count[arr[i] - min_val] - 1] = arr[i];
		count[arr[i] - min_val]--;
	}
	arr = output;
}

int main() {
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) cin >> arr[i];
	countingSort(arr);
	for (int x : arr) cout << x << ' ';
	cout << endl;
	return 0;
}
