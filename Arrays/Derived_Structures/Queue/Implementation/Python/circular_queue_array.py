class CircularQueue:
	def __init__(self, cap):
		self.arr = [None] * cap
		self.front = 0
		self.rear = -1
		self.size = 0
		self.capacity = cap
	def enqueue(self, x):
		if self.size == self.capacity:
			return
		self.rear = (self.rear + 1) % self.capacity
		self.arr[self.rear] = x
		self.size += 1
	def dequeue(self):
		if self.size == 0:
			return
		self.front = (self.front + 1) % self.capacity
		self.size -= 1
	def get_front(self):
		return self.arr[self.front] if self.size != 0 else None
	def empty(self):
		return self.size == 0

if __name__ == "__main__":
	q = CircularQueue(3)
	q.enqueue(1); q.enqueue(2); q.enqueue(3)
	print(q.get_front())
	q.dequeue()
	print(q.get_front())
	print("Empty" if q.empty() else "Not Empty")
