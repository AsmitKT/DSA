#include <bits/stdc++.h>
using namespace std;

class DynamicBitset {
	vector<uint64_t> bits;
	int size;
public:
	DynamicBitset(int n) : size(n), bits((n + 63) / 64) {}
	void set(int i) { bits[i / 64] |= (1ULL << (i % 64)); }
	void reset(int i) { bits[i / 64] &= ~(1ULL << (i % 64)); }
	bool test(int i) const { return bits[i / 64] & (1ULL << (i % 64)); }
};

int main() {
	DynamicBitset db(128);
	db.set(10); db.set(127);
	cout << db.test(10) << ' ' << db.test(127) << ' ' << db.test(0) << endl;
	return 0;
}
