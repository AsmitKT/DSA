#include <bits/stdc++.h>
using namespace std;

class CircularDeque {
	vector<int> arr;
	int front, rear, size, capacity;
public:
	CircularDeque(int cap) : arr(cap), front(0), rear(-1), size(0), capacity(cap) {}
	void push_front(int x) {
		if (size == capacity) return;
		front = (front - 1 + capacity) % capacity;
		arr[front] = x;
		size++;
	}
	void push_back(int x) {
		if (size == capacity) return;
		rear = (rear + 1) % capacity;
		arr[rear] = x;
		size++;
	}
	void pop_front() {
		if (size == 0) return;
		front = (front + 1) % capacity;
		size--;
	}
	void pop_back() {
		if (size == 0) return;
		rear = (rear - 1 + capacity) % capacity;
		size--;
	}
	int getFront() { return size == 0 ? -1 : arr[front]; }
	int getRear() { return size == 0 ? -1 : arr[rear]; }
	bool empty() { return size == 0; }
};

int main() {
	CircularDeque d(3);
	d.push_back(1); d.push_front(2); d.push_back(3);
	cout << d.getFront() << ' ' << d.getRear() << endl;
	d.pop_front();
	cout << d.getFront() << ' ' << d.getRear() << endl;
	cout << (d.empty() ? "Empty" : "Not Empty") << endl;
	return 0;
}
