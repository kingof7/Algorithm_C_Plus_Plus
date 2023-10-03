#include<bits/stdc++.h>
using namespace std;
int n, m;
string s;
map<string, int> mp; // O(logN), �׷��� int�� string�� ã���� O(N)�ɸ� 
//map<int, string> mp2; // �׷��� map<int, string> �ڷᱸ���� �ϳ� �� �ʿ��� �� // O(logN)
string a[100004]; // O(1)
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> n >> m;
	for(int i=0; i<n; i++) {
		cin >> s;
		mp[s] = i + 1; // string-int ���� 
//		mp2[i + 1] = s;
		a[i + 1] = s; // int-string ���� 
	}
	for(int i=0; i<m; i++) {
		cin >> s;
		if(atoi(s.c_str()) == 0) { // ���ڰ� �ƴѰ��, �� ������ ��� 
			cout << mp[s] << "\n"; // string���� int ���� 
		}else { // ������ ��� 
			cout << a[atoi(s.c_str())] << "\n"; // ���ڷ� ����(���ϸ�) ���� O(1)
//			cout << mp2[atoi(s.c_str())] << "\n"; // O(logN)
		}
	}
	
	return 0;
}
