import array

class Bitmap:
	def __init__(self, n):
		self.size = n
		self.arr = array.array('B', [0] * ((n + 7) // 8))
	def set(self, i):
		self.arr[i // 8] |= 1 << (i % 8)
	def reset(self, i):
		self.arr[i // 8] &= ~(1 << (i % 8))
	def test(self, i):
		return (self.arr[i // 8] >> (i % 8)) & 1

if __name__ == "__main__":
	bm = Bitmap(16)
	bm.set(3)
	bm.set(7)
	print(bm.test(3), bm.test(7), bm.test(0))
