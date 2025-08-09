def count_substrings_with_k_distinct(s, k):
	from collections import defaultdict
	freq = defaultdict(int)
	l = res = 0
	for r in range(len(s)):
		freq[s[r]] += 1
		while len(freq) > k:
			freq[s[l]] -= 1
			if freq[s[l]] == 0:
				del freq[s[l]]
			l += 1
		res += r - l + 1
	return res

if __name__ == "__main__":
	s = input().strip()
	k = int(input())
	print(count_substrings_with_k_distinct(s, k))
