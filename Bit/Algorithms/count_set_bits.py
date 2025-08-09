def count_set_bits(n):
	return bin(n).count('1')

if __name__ == "__main__":
	print(count_set_bits(7))
