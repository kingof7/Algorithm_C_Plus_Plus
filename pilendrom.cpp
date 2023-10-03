#include<bits/stdc++.h>
using namespace std;
string str = "";
string rStr = "";
int main() {
	cin >> str;
	rStr = str;
	reverse(rStr.begin(), rStr.end());
	if(str == rStr) cout << "1";
	else cout << "0";
	return 0;
}
