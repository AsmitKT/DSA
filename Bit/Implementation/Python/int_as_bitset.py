class Bitset:
	def __init__(self, n):
		self.size = n
		self.bits = 0
	def set(self, i):
		self.bits |= 1 << i
	def reset(self, i):
		self.bits &= ~(1 << i)
	def test(self, i):
		return (self.bits >> i) & 1

if __name__ == "__main__":
	b = Bitset(16)
	b.set(5)
	b.set(8)
	print(b.test(5), b.test(8), b.test(0))
