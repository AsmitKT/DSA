#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(const string& s) {
	unordered_map<char, int> last;
	int l = 0, res = 0;
	for (int r = 0; r < s.size(); r++) {
		if (last.count(s[r])) l = max(l, last[s[r]] + 1);
		last[s[r]] = r;
		res = max(res, r - l + 1);
	}
	return res;
}

int main() {
	string s;
	cin >> s;
	cout << lengthOfLongestSubstring(s) << endl;
	return 0;
}
