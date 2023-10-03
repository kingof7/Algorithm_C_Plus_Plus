#include<bits/stdc++.h>
using namespace std;
int N, M, ret;
int main() {
	cin >> N >> M;
	int arr[N] = {0, };
	for(int i=0; i<N; i++) {
		cin >> arr[i];
	}
	if(M > 200000) cout << 0 << "\n";
	else {
		for(int i=0; i<N-1; i++) {
			for(int j=i+1; j<N; j++) {
				if(arr[i] + arr[j] == M) ret++;
			}
		}
		cout << ret;
	}
	return 0;
}
