#include <bits/stdc++.h>
using namespace std;

class Deque {
	deque<int> dq;
public:
	void push_front(int x) { dq.push_front(x); }
	void push_back(int x) { dq.push_back(x); }
	void pop_front() { if (!dq.empty()) dq.pop_front(); }
	void pop_back() { if (!dq.empty()) dq.pop_back(); }
	int front() { return dq.empty() ? -1 : dq.front(); }
	int back() { return dq.empty() ? -1 : dq.back(); }
	bool empty() { return dq.empty(); }
};

int main() {
	Deque d;
	d.push_back(1); d.push_front(2); d.push_back(3);
	cout << d.front() << ' ' << d.back() << endl;
	d.pop_front();
	cout << d.front() << ' ' << d.back() << endl;
	cout << (d.empty() ? "Empty" : "Not Empty") << endl;
	return 0;
}
