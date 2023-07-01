#include<bits/stdc++.h>
using namespace std;

int i;
int main() {
	// i에 값을 할당하더라도, 주소는 변하지 않음 
	cout << &i << '\n'; // &i는 i의 주소
	i = 0;
	cout << &i << '\n'; // &i는 i의 주소 
	return 0;
}
