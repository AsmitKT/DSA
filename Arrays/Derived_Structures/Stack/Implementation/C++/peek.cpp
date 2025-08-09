#include <bits/stdc++.h>
using namespace std;

class Stack {
	vector<int> arr;
public:
	void push(int x) { arr.push_back(x); }
	void pop() { if (!arr.empty()) arr.pop_back(); }
	int top() { return arr.empty() ? -1 : arr.back(); }
	bool empty() { return arr.empty(); }
	int peek(int idx) { return (idx >= 0 && idx < arr.size()) ? arr[idx] : -1; }
};

int main() {
	Stack s;
	s.push(1); s.push(2); s.push(3);
	cout << s.peek(1) << endl;
	cout << s.top() << endl;
	return 0;
}
