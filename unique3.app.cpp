#include<bits/stdc++.h> // 1. C++ ǥ�� ���̺귯���� ��� ��� ������ �����ϴ� ��� ����

using namespace std; // 2. std ���ӽ����̽��� ���
vector<int> v{2,2,1,1,2,2,3,3,5,6,7,8,9};
int main() {
    sort(v.begin(),v.end()); // sorting ascending
	v.erase(unique(v.begin(), v.end()), v.end()); // �ߺ����� ó�� �� ������ �ʿ���� �κл��� 
    for(int i : v) cout << i << " "; 
    cout << '\n';
    return 0;
}
