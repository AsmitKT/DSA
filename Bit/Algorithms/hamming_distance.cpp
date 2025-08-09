#include <bits/stdc++.h>
using namespace std;

int hammingDistance(int x, int y) {
	int dist = 0, val = x ^ y;
	while (val) {
		dist += val & 1;
		val >>= 1;
	}
	return dist;
}

int main() {
	int x = 1, y = 4;
	cout << hammingDistance(x, y) << endl;
	return 0;
}
