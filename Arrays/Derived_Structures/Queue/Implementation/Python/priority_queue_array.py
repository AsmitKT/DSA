import heapq

class PriorityQueue:
	def __init__(self):
		self.arr = []
	def push(self, x):
		heapq.heappush(self.arr, -x)
	def pop(self):
		if self.arr:
			heapq.heappop(self.arr)
	def top(self):
		return -self.arr[0] if self.arr else None
	def empty(self):
		return not self.arr

if __name__ == "__main__":
	pq = PriorityQueue()
	pq.push(3); pq.push(1); pq.push(2)
	print(pq.top())
	pq.pop()
	print(pq.top())
	print("Empty" if pq.empty() else "Not Empty")
