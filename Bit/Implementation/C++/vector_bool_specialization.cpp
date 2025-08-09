#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<bool> bits(8);
	bits[2] = 1; bits[4] = 1;
	for (bool b : bits) cout << b;
	cout << endl;
	return 0;
}
