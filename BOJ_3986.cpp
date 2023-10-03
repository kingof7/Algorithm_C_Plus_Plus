#include<bits/stdc++.h>
using namespace std;
int N, ret;
string word;
int main() {
	cin >> N;
	for(int i=0; i<N; i++) {
		stack<char> s;
		cin >> word;
		for(int j=0; j<word.size(); j++) {
			if(!s.empty() && (s.top() == word[j])) {
				s.pop();
			}else {
				s.push(word[j]);
			}
		}
		if(s.size() == 0) ret++;
	}
	cout << ret << "\n";
}

