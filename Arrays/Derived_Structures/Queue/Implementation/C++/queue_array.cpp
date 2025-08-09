#include <bits/stdc++.h>
using namespace std;

class Queue {
	vector<int> arr;
	int front_idx = 0;
public:
	void enqueue(int x) { arr.push_back(x); }
	void dequeue() { if (front_idx < arr.size()) front_idx++; }
	int front() { return (front_idx < arr.size()) ? arr[front_idx] : -1; }
	bool empty() { return front_idx >= arr.size(); }
};

int main() {
	Queue q;
	q.enqueue(1); q.enqueue(2); q.enqueue(3);
	cout << q.front() << endl;
	q.dequeue();
	cout << q.front() << endl;
	cout << (q.empty() ? "Empty" : "Not Empty") << endl;
	return 0;
}
