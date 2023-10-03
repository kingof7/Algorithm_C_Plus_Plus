#include <iostream>
#include <vector>
using namespace std;
// ret = max(ret, value);
// ret = min(ret, value);
// 문제의 최솟값 잡기
// N : 1 ~ 10만
// K : 1 ~ 10만 - 1 (
// 이 문제의 최솟값은? -100 * (10만번) >> -1000만
// psum = 구간합 
typedef long long ll;
int n, k, temp, psum[100001], ret = -10000004;
int main() {
    //ios_base::sync_with_studio(false);
    //cin.tie(NULL);cout.tie(NULL);
    cin >> n >> k;
    for(int i=1; i<=n; i++) { // 구간합은 1부터 
    	cin >> temp; psum[i] = psum[i-1] + temp;
	}
	for(int i = k; i <= n; i++) {
		ret = max(ret, psum[i] - psum[i - k]);
	}
	cout << ret << "\n";
	return 0;
}

