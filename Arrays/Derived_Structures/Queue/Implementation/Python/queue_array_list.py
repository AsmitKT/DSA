class Queue:
	def __init__(self):
		self.arr = []
	def enqueue(self, x):
		self.arr.append(x)
	def dequeue(self):
		if self.arr:
			self.arr.pop(0)
	def front(self):
		return self.arr[0] if self.arr else None
	def empty(self):
		return not self.arr

if __name__ == "__main__":
	q = Queue()
	q.enqueue(1); q.enqueue(2); q.enqueue(3)
	print(q.front())
	q.dequeue()
	print(q.front())
	print("Empty" if q.empty() else "Not Empty")
