// ������ ������
#include<bits/stdc++.h>
using namespace std;
int a[3] = {1, 2, 3};
// vector<?> vector Ÿ���� ����ȵ� 
int main() {
	int* c = a; // Array to Pointer Decay; : Array�� ���̰� �������� ù��° �ּҰ� �Ҵ�ȴ�.
	cout << c << "\n";
	cout << &a[0] << "\n";
	cout << c + 1 << "\n";
	cout << &a[1] << "\n";
	return 0;
}
