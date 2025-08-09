def length_of_longest_substring_k_distinct(s, k):
	from collections import defaultdict
	freq = defaultdict(int)
	l = res = 0
	for r, c in enumerate(s):
		freq[c] += 1
		while len(freq) > k:
			freq[s[l]] -= 1
			if freq[s[l]] == 0:
				del freq[s[l]]
			l += 1
		res = max(res, r - l + 1)
	return res

if __name__ == "__main__":
	s = input().strip()
	k = int(input())
	print(length_of_longest_substring_k_distinct(s, k))
