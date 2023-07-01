// 역참조 연산자
#include<bits/stdc++.h>
using namespace std;
int a[3] = {1, 2, 3};
// vector<?> vector 타입은 적용안됨 
int main() {
	int* c = a; // Array to Pointer Decay; : Array의 길이가 없어지고 첫번째 주소가 할당된다.
	cout << c << "\n";
	cout << &a[0] << "\n";
	cout << c + 1 << "\n";
	cout << &a[1] << "\n";
	return 0;
}
