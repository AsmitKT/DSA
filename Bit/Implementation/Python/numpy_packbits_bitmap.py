import numpy as np

class Bitmap:
	def __init__(self, n):
		self.size = n
		self.arr = np.zeros((n + 7) // 8, dtype=np.uint8)
	def set(self, i):
		self.arr[i // 8] |= 1 << (i % 8)
	def reset(self, i):
		self.arr[i // 8] &= ~(1 << (i % 8))
	def test(self, i):
		return (self.arr[i // 8] >> (i % 8)) & 1

if __name__ == "__main__":
	bm = Bitmap(16)
	bm.set(4)
	bm.set(12)
	print(bm.test(4), bm.test(12), bm.test(0))
