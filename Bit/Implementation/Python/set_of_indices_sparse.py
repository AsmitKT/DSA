class SparseBitset:
	def __init__(self):
		self.bits = set()
	def set(self, i):
		self.bits.add(i)
	def reset(self, i):
		self.bits.discard(i)
	def test(self, i):
		return i in self.bits

if __name__ == "__main__":
	s = SparseBitset()
	s.set(100)
	s.set(200)
	print(s.test(100), s.test(200), s.test(1))
