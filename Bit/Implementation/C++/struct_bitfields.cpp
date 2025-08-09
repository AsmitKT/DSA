#include <iostream>
using namespace std;

struct Flags {
	unsigned int a : 1;
	unsigned int b : 2;
	unsigned int c : 1;
};

int main() {
	Flags f = {1, 2, 0};
	cout << f.a << ' ' << f.b << ' ' << f.c << endl;
	return 0;
}
