class Stack:
	def __init__(self):
		self.arr = []
	def push(self, x):
		self.arr.append(x)
	def pop(self):
		if self.arr:
			self.arr.pop()
	def top(self):
		return self.arr[-1] if self.arr else None
	def empty(self):
		return not self.arr

if __name__ == "__main__":
	s = Stack()
	s.push(1); s.push(2); s.push(3)
	print(s.top())
	s.pop()
	print(s.top())
	print("Empty" if s.empty() else "Not Empty")
