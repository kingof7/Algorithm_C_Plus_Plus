#include<bits/stdc++.h>
using namespace std;

int i;
int main() {
	// i�� ���� �Ҵ��ϴ���, �ּҴ� ������ ���� 
	cout << &i << '\n'; // &i�� i�� �ּ�
	i = 0;
	cout << &i << '\n'; // &i�� i�� �ּ� 
	return 0;
}
