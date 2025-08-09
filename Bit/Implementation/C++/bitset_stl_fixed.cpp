#include <bits/stdc++.h>
using namespace std;

int main() {
	bitset<8> b;
	b[1] = 1; b[3] = 1; b[5] = 1;
	cout << b << endl;
	cout << "Count: " << b.count() << endl;
	cout << "Bit 3: " << b[3] << endl;
	b.flip();
	cout << "Flipped: " << b << endl;
	return 0;
}
