def length_of_longest_substring(s):
	last = {}
	l = res = 0
	for r, c in enumerate(s):
		if c in last:
			l = max(l, last[c] + 1)
		last[c] = r
		res = max(res, r - l + 1)
	return res

if __name__ == "__main__":
	s = input().strip()
	print(length_of_longest_substring(s))
