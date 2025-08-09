def find_all_anagrams(s, p):
	from collections import Counter
	res = []
	plen = len(p)
	phash = Counter(p)
	window = Counter(s[:plen-1])
	for i in range(plen-1, len(s)):
		window[s[i]] += 1
		if window == phash:
			res.append(i - plen + 1)
		window[s[i - plen + 1]] -= 1
		if window[s[i - plen + 1]] == 0:
			del window[s[i - plen + 1]]
	return res

if __name__ == "__main__":
	s = input().strip()
	p = input().strip()
	print(*find_all_anagrams(s, p))
