#include <iostream>
#include <vector>
using namespace std;
// ret = max(ret, value);
// ret = min(ret, value);
// ������ �ּڰ� ���
// N : 1 ~ 10��
// K : 1 ~ 10�� - 1 (
// �� ������ �ּڰ���? -100 * (10����) >> -1000��
// psum = ������ 
typedef long long ll;
int n, k, temp, psum[100001], ret = -10000004;
int main() {
    //ios_base::sync_with_studio(false);
    //cin.tie(NULL);cout.tie(NULL);
    cin >> n >> k;
    for(int i=1; i<=n; i++) { // �������� 1���� 
    	cin >> temp; psum[i] = psum[i-1] + temp;
	}
	for(int i = k; i <= n; i++) {
		ret = max(ret, psum[i] - psum[i - k]);
	}
	cout << ret << "\n";
	return 0;
}

