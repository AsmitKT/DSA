class Deque:
	def __init__(self):
		self.arr = []
	def push_front(self, x):
		self.arr.insert(0, x)
	def push_back(self, x):
		self.arr.append(x)
	def pop_front(self):
		if self.arr:
			self.arr.pop(0)
	def pop_back(self):
		if self.arr:
			self.arr.pop()
	def front(self):
		return self.arr[0] if self.arr else None
	def back(self):
		return self.arr[-1] if self.arr else None
	def empty(self):
		return not self.arr

if __name__ == "__main__":
	d = Deque()
	d.push_back(1); d.push_front(2); d.push_back(3)
	print(d.front(), d.back())
	d.pop_front()
	print(d.front(), d.back())
	print("Empty" if d.empty() else "Not Empty")
