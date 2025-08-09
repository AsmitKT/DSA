#include <bits/stdc++.h>
using namespace std;

class BinaryHeap {
	vector<int> arr;
public:
	void push(int x) {
		arr.push_back(x);
		push_heap(arr.begin(), arr.end());
	}
	void pop() {
		pop_heap(arr.begin(), arr.end());
		arr.pop_back();
	}
	int top() { return arr.empty() ? -1 : arr.front(); }
	bool empty() { return arr.empty(); }
};

int main() {
	BinaryHeap h;
	h.push(3); h.push(1); h.push(2);
	cout << h.top() << endl;
	h.pop();
	cout << h.top() << endl;
	cout << (h.empty() ? "Empty" : "Not Empty") << endl;
	return 0;
}
