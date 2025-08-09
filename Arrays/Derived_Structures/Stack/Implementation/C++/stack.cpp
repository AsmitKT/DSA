#include <bits/stdc++.h>
using namespace std;

class Stack {
	vector<int> arr;
public:
	void push(int x) { arr.push_back(x); }
	void pop() { if (!arr.empty()) arr.pop_back(); }
	int top() { return arr.empty() ? -1 : arr.back(); }
	bool empty() { return arr.empty(); }
};

int main() {
	Stack s;
	s.push(1); s.push(2); s.push(3);
	cout << s.top() << endl;
	s.pop();
	cout << s.top() << endl;
	cout << (s.empty() ? "Empty" : "Not Empty") << endl;
	return 0;
}
