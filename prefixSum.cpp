#include<bits/stdc++.h>
using namespace std;
int a[100004], b, c, psum[100004], n, m;
int main() {
	//2ios_base::sync_with_studio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n >> m; // n���� �迭������ m���� �� �Է� 
	for(int i=1; i<=n; i++) {
		cin >> a[i]; // n���� �迭������ 1��° ��Һ��� n��°���� ���� �Է� 
		psum[i] = psum[i-1] + a[i]; // ������ �迭�� ���� 
	}
	for(int i=1; i<=m; i++) {
		cin >> b >> c; // b~c������ �Է� 
		cout << psum[c] - psum[b - 1] << "\n"; // b~c������ ���� ��� 
	}
	return 0;
	
	//�Է�, ��� ���� 
	
	//n���� �迭 ����, m���� �������� ���� �Է� 
	//n
	//m
	
	//a[1]���� a[5]���� ��Ҹ� �Է� 
	//1
	//2
	//...
	//5
	
	//�����Է� �� ��� (m�� �ݺ�) 
	//1 => 1���� 
	//2 => 2������ �� 
	//cout : 3 
	
	//2
	//5
	//cout : psum[5] - psum[1]
	///...
	
}
