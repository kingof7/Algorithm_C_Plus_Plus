#include<bits/stdc++.h>
using namespace std;
int n, m;
string c1, c2;
int main() {
	cin >> n;
	for(int i=0; i<n; i++) {
		unordered_map<string, int> mp;
		cin >> m;
		for(int j=0; j<m; j++) {
			cin >> c1 >> c2;
			mp[c2]++;
		}
		long long cases = 1;
		for(auto a : mp) {
			cases *= (a.second + 1); // a.second = value
		}
		cout << --cases << "\n";
	}
	return 0;
} 
