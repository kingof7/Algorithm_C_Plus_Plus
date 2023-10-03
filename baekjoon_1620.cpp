#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int n, m;
string pokemon;
string input;
vector<string> v;
vector<string> v2;
int main() {
	cin >> n >> m;
	for(int i=1; i<=n; i++) {
		cin >> pokemon; v.push_back(pokemon);
	}
	for(int i=0; i<m; i++) {
		cin >> input; v2.push_back(input);
	}
	for(int i=0; i<v2.size(); i++) {
		int alpha = v2[i][0] - 'A';		
		if(alpha >=0 && alpha <= 90) { // ´ë¹®ÀÚ 
			cout << find(v.begin(), v.end(), v2[i]) - v.begin() + 1 << "\n"; 
		}else {
			int index = stoi(v2[i]); cout << v[index - 1] << "\n";
		}
	}
	return 0;
}

