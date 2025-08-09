#include <bits/stdc++.h>
using namespace std;

class Bitmask {
	vector<uint64_t> bits;
	int size;
public:
	Bitmask(int n) : size(n), bits((n + 63) / 64) {}
	void set(int i) { bits[i / 64] |= (1ULL << (i % 64)); }
	void reset(int i) { bits[i / 64] &= ~(1ULL << (i % 64)); }
	bool test(int i) const { return bits[i / 64] & (1ULL << (i % 64)); }
};

int main() {
	Bitmask bm(100);
	bm.set(5); bm.set(99);
	cout << bm.test(5) << ' ' << bm.test(99) << ' ' << bm.test(0) << endl;
	return 0;
}
