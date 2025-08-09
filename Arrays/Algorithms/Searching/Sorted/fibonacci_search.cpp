#include <bits/stdc++.h>
using namespace std;

int fibonacciSearch(const vector<int>& arr, int x) {
	int n = arr.size();
	int fibMMm2 = 0, fibMMm1 = 1, fibM = fibMMm2 + fibMMm1;
	while (fibM < n) {
		fibMMm2 = fibMMm1;
		fibMMm1 = fibM;
		fibM = fibMMm2 + fibMMm1;
	}
	int offset = -1;
	while (fibM > 1) {
		int i = min(offset + fibMMm2, n - 1);
		if (arr[i] < x) {
			fibM = fibMMm1;
			fibMMm1 = fibMMm2;
			fibMMm2 = fibM - fibMMm1;
			offset = i;
		} else if (arr[i] > x) {
			fibM = fibMMm2;
			fibMMm1 = fibMMm1 - fibMMm2;
			fibMMm2 = fibM - fibMMm1;
		} else {
			return i;
		}
	}
	if (fibMMm1 && offset + 1 < n && arr[offset + 1] == x) return offset + 1;
	return -1;
}

int main() {
	int n, x;
	cin >> n >> x;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) cin >> arr[i];
	cout << fibonacciSearch(arr, x) << endl;
	return 0;
}
