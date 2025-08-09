class CircularDeque:
	def __init__(self, cap):
		self.arr = [None] * cap
		self.front = 0
		self.rear = -1
		self.size = 0
		self.capacity = cap
	def push_front(self, x):
		if self.size == self.capacity:
			return
		self.front = (self.front - 1 + self.capacity) % self.capacity
		self.arr[self.front] = x
		self.size += 1
	def push_back(self, x):
		if self.size == self.capacity:
			return
		self.rear = (self.rear + 1) % self.capacity
		self.arr[self.rear] = x
		self.size += 1
	def pop_front(self):
		if self.size == 0:
			return
		self.front = (self.front + 1) % self.capacity
		self.size -= 1
	def pop_back(self):
		if self.size == 0:
			return
		self.rear = (self.rear - 1 + self.capacity) % self.capacity
		self.size -= 1
	def get_front(self):
		return self.arr[self.front] if self.size != 0 else None
	def get_rear(self):
		return self.arr[self.rear] if self.size != 0 else None
	def empty(self):
		return self.size == 0

if __name__ == "__main__":
	d = CircularDeque(3)
	d.push_back(1); d.push_front(2); d.push_back(3)
	print(d.get_front(), d.get_rear())
	d.pop_front()
	print(d.get_front(), d.get_rear())
	print("Empty" if d.empty() else "Not Empty")
class CircularDeque:
	def __init__(self, cap):
		self.arr = [None] * cap
		self.front = 0
		self.rear = -1
		self.size = 0
		self.capacity = cap
	def push_front(self, x):
		if self.size == self.capacity:
			return
		self.front = (self.front - 1 + self.capacity) % self.capacity
		self.arr[self.front] = x
		self.size += 1
	def push_back(self, x):
		if self.size == self.capacity:
			return
		self.rear = (self.rear + 1) % self.capacity
		self.arr[self.rear] = x
		self.size += 1
	def pop_front(self):
		if self.size == 0:
			return
		self.front = (self.front + 1) % self.capacity
		self.size -= 1
	def pop_back(self):
		if self.size == 0:
			return
		self.rear = (self.rear - 1 + self.capacity) % self.capacity
		self.size -= 1
	def get_front(self):
		return self.arr[self.front] if self.size != 0 else None
	def get_rear(self):
		return self.arr[self.rear] if self.size != 0 else None
	def empty(self):
		return self.size == 0

if __name__ == "__main__":
	d = CircularDeque(3)
	d.push_back(1); d.push_front(2); d.push_back(3)
	print(d.get_front(), d.get_rear())
	d.pop_front()
	print(d.get_front(), d.get_rear())
	print("Empty" if d.empty() else "Not Empty")
