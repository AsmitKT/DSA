#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstringKDistinct(const string& s, int k) {
	unordered_map<char, int> freq;
	int l = 0, res = 0;
	for (int r = 0; r < s.size(); r++) {
		freq[s[r]]++;
		while (freq.size() > k) {
			freq[s[l]]--;
			if (freq[s[l]] == 0) freq.erase(s[l]);
			l++;
		}
		res = max(res, r - l + 1);
	}
	return res;
}

int main() {
	string s;
	int k;
	cin >> s >> k;
	cout << lengthOfLongestSubstringKDistinct(s, k) << endl;
	return 0;
}
