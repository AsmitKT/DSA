#include <bits/stdc++.h>
using namespace std;

class CircularQueue {
	vector<int> arr;
	int front, rear, size, capacity;
public:
	CircularQueue(int cap) : arr(cap), front(0), rear(-1), size(0), capacity(cap) {}
	void enqueue(int x) {
		if (size == capacity) return;
		rear = (rear + 1) % capacity;
		arr[rear] = x;
		size++;
	}
	void dequeue() {
		if (size == 0) return;
		front = (front + 1) % capacity;
		size--;
	}
	int getFront() { return size == 0 ? -1 : arr[front]; }
	bool empty() { return size == 0; }
};

int main() {
	CircularQueue q(3);
	q.enqueue(1); q.enqueue(2); q.enqueue(3);
	cout << q.getFront() << endl;
	q.dequeue();
	cout << q.getFront() << endl;
	cout << (q.empty() ? "Empty" : "Not Empty") << endl;
	return 0;
}
