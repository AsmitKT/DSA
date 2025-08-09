import numpy as np

class Stack:
	def __init__(self):
		self.arr = np.array([], dtype=int)
	def push(self, x):
		self.arr = np.append(self.arr, x)
	def pop(self):
		if self.arr.size:
			self.arr = self.arr[:-1]
	def top(self):
		return self.arr[-1] if self.arr.size else None
	def empty(self):
		return self.arr.size == 0

if __name__ == "__main__":
	s = Stack()
	s.push(1); s.push(2); s.push(3)
	print(s.top())
	s.pop()
	print(s.top())
	print("Empty" if s.empty() else "Not Empty")
