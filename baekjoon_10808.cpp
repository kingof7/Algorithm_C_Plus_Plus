#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string str;
int cnt[25];
int main() {
	cin >> str;
	for(char a : str) {
		cout << a - 'a' << " ";
		cnt[a - 'a']++;  // x축 -방향으로 95만큼 이동 
	}
	for(int i = 0; i < 26; i++) cout << cnt[i] << " ";
	
	return 0;
}
