#include <bits/stdc++.h>
using namespace std;

vector<int> findAnagrams(const string& s, const string& p) {
	vector<int> res, phash(26, 0), shash(26, 0);
	int plen = p.size(), slen = s.size();
	if (slen < plen) return res;
	for (int i = 0; i < plen; i++) phash[p[i] - 'a']++;
	for (int i = 0; i < slen; i++) {
		shash[s[i] - 'a']++;
		if (i >= plen) shash[s[i - plen] - 'a']--;
		if (shash == phash) res.push_back(i - plen + 1);
	}
	return res;
}

int main() {
	string s, p;
	cin >> s >> p;
	vector<int> res = findAnagrams(s, p);
	for (int idx : res) cout << idx << ' ';
	cout << endl;
	return 0;
}
