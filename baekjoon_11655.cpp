#include<bits/stdc++.h>
using namespace std;
string s;
int main() {
	getline(cin, s);
	for(int i=0; i<s.size(); i++){
		// �빮���� ���
		// s[i] == 77 65 A / M 77
		if(s[i] >= 65 && s[i] <= 90) {
			if(s[i] + 13 > 90) s[i] = s[i] + 13 - 26; // 90(Z)�� �Ѿ�� ��� 
			else s[i] = s[i] + 13;	
		}else if(s[i] >= 97 && s[i] <= 122) {
			if(s[i] + 13 > 122) s[i] = s[i] + 13 - 26; // 122(z)�� �Ѿ�� ��� 
			else s[i] = s[i] + 13;
		}
		cout << s[i];
	}
	return 0;
}
