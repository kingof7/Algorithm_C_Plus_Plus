// ���� ��������� Ǯ��
#include<bits/stdc++.h>
using namespace std;
vector<int> v; 
void printV(vector<int> &v) {
	for(int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << "\n";
} 
void makePermutation(int n, int r, int depth) {
	cout << n << " : " << r << " : " << depth << '\n'; 
	if(r == depth) {
		//logic
		printV(v);
		return;
	}
	for(int i = depth; i < n; i++) {
		swap(v[i], v[depth]);
		makePermutation(n, r, depth + 1); // depth�� ��ͱ��� 
		swap(v[i], v[depth]);
	}
	return;
}
int main() {
	/* ��������� Ǯ�� */
	for(int i = 1; i <= 3; i++) v.push_back(i);
	makePermutation(3, 3, 0);
	
	/* C++ �����Լ� (next_permutation Ȱ�� Ǯ��)
	vector<int> v = {1, 2, 3};
	sort(v.begin(), v.end()); // �������� ����
	do {
	    for(int i : v) cout << i << " ";
	}while(next_permutation(v.begin(), v.end()))
	*/
	return 0;
}
