#include <bits/stdc++.h>
using namespace std;

class PriorityQueue {
	priority_queue<int> pq;
public:
	void push(int x) { pq.push(x); }
	void pop() { if (!pq.empty()) pq.pop(); }
	int top() { return pq.empty() ? -1 : pq.top(); }
	bool empty() { return pq.empty(); }
};

int main() {
	PriorityQueue pq;
	pq.push(3); pq.push(1); pq.push(2);
	cout << pq.top() << endl;
	pq.pop();
	cout << pq.top() << endl;
	cout << (pq.empty() ? "Empty" : "Not Empty") << endl;
	return 0;
}
