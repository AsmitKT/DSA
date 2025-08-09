#include <bits/stdc++.h>
using namespace std;

void applyOperation(vector<int>& diff, int l, int r, int x) {
	diff[l] += x;
	if (r + 1 < diff.size()) diff[r + 1] -= x;
}

vector<int> getArrayFromDiff(vector<int>& diff) {
	vector<int> res(diff.size());
	res[0] = diff[0];
	for (int i = 1; i < diff.size(); i++) res[i] = res[i - 1] + diff[i];
	return res;
}

int main() {
	int n, q;
	cin >> n >> q;
	vector<int> arr(n), diff(n + 1, 0);
	for (int i = 0; i < n; i++) cin >> arr[i];
	for (int i = 0; i < n; i++) diff[i] = arr[i] - (i ? arr[i - 1] : 0);
	while (q--) {
		int l, r, x;
		cin >> l >> r >> x;
		applyOperation(diff, l, r, x);
	}
	vector<int> res = getArrayFromDiff(diff);
	for (int i = 0; i < n; i++) cout << res[i] << ' ';
	cout << endl;
	return 0;
}
