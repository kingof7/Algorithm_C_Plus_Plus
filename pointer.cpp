// ���Ḯ��Ʈ
//  ___________________________
// | ��� Ŭ���� (����������) | next��� �����͸� ���� (���� ����� �ּҸ� ������ ����)
// ---------------------------
#include<bits/stdc++.h>
using namespace std;
double a = 4.4;
int c = 10;
int main() {
	// int <= int Ÿ��
	// int* <= int ������ Ÿ�� 
	// <Ÿ��> * <������> = &<�ش� Ÿ���� �ٸ� ������ �ּ�> 
	// �����ʹ� �ڷ����̾ƴ϶� OS�� ��Ʈ������ (32/64��Ʈ) �ּҸ� ���´�
	// 32��Ʈ �ü�� : 4����Ʈ
	// 64��Ʈ �ü�� : 8����Ʈ 
	double* b = &a;
	int* d = &c;
	cout << sizeof(b) << '\n';
	cout << sizeof(d) << '\n';
	
	// pointer : ������ �ּҰ�
	// ����,�Ҵ� ��� : �����ʹ� Ÿ��* ������ = �ּ�
	// pointer�� ũ��� ����, (OS�� ��Ʈ�� ����) 
}
