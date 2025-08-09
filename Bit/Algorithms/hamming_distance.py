def hamming_distance(x, y):
	return bin(x ^ y).count('1')

if __name__ == "__main__":
	print(hamming_distance(1, 4))
