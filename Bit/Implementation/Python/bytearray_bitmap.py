class Bitmap:
	def __init__(self, n):
		self.size = n
		self.arr = bytearray((n + 7) // 8)
	def set(self, i):
		self.arr[i // 8] |= 1 << (i % 8)
	def reset(self, i):
		self.arr[i // 8] &= ~(1 << (i % 8))
	def test(self, i):
		return (self.arr[i // 8] >> (i % 8)) & 1

if __name__ == "__main__":
	bm = Bitmap(16)
	bm.set(2)
	bm.set(10)
	print(bm.test(2), bm.test(10), bm.test(0))
