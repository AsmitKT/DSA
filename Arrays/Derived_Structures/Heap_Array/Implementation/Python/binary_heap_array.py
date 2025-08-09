import heapq

class BinaryHeap:
	def __init__(self):
		self.arr = []
	def push(self, x):
		heapq.heappush(self.arr, x)
	def pop(self):
		if self.arr:
			heapq.heappop(self.arr)
	def top(self):
		return self.arr[0] if self.arr else None
	def empty(self):
		return not self.arr

if __name__ == "__main__":
	h = BinaryHeap()
	h.push(3); h.push(1); h.push(2)
	print(h.top())
	h.pop()
	print(h.top())
	print("Empty" if h.empty() else "Not Empty")
