#include<bits/stdc++.h>
using namespace std;
int n, m;
string s;
map<string, int> mp; // O(logN), 그러나 int로 string을 찾으면 O(N)걸림 
//map<int, string> mp2; // 그래서 map<int, string> 자료구조가 하나 더 필요한 것 // O(logN)
string a[100004]; // O(1)
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> n >> m;
	for(int i=0; i<n; i++) {
		cin >> s;
		mp[s] = i + 1; // string-int 매핑 
//		mp2[i + 1] = s;
		a[i + 1] = s; // int-string 매핑 
	}
	for(int i=0; i<m; i++) {
		cin >> s;
		if(atoi(s.c_str()) == 0) { // 숫자가 아닌경우, 즉 문자인 경우 
			cout << mp[s] << "\n"; // string으로 int 꺼냄 
		}else { // 숫자인 경우 
			cout << a[atoi(s.c_str())] << "\n"; // 숫자로 문자(포켓몬) 꺼냄 O(1)
//			cout << mp2[atoi(s.c_str())] << "\n"; // O(logN)
		}
	}
	
	return 0;
}
