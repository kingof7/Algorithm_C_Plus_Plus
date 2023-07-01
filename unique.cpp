#include<bits/stdc++.h>
using namespace std;
map<int, int> mp;
int main() {
	vector<int> v{1,1,2,2,3,3};
	for(int i : v) {
		if(mp[i]) {
			continue;
		}else {
			mp[i] = 1;
		}
	}
	vector<int> ret;
	for(auto it : mp) {
		ret.push_back(it.first); // it.first는 값이아니라 키를 타나냄 
	}
	for(int i : ret) cout << i << '\n'; // 그래서 1 2 3 이 찍히는 것 
}
