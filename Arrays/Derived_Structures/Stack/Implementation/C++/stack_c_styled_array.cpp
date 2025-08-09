#include <bits/stdc++.h>
using namespace std;

class Stack {
	int arr[100], top_idx;
public:
	Stack() : top_idx(-1) {}
	void push(int x) { if (top_idx < 99) arr[++top_idx] = x; }
	void pop() { if (top_idx >= 0) top_idx--; }
	int top() { return top_idx >= 0 ? arr[top_idx] : -1; }
	bool empty() { return top_idx == -1; }
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
