#include<bits/stdc++.h>
using namespace std;
int a[100004], b, c, psum[100004], n, m;
int main() {
	//2ios_base::sync_with_studio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n >> m; // n개의 배열공간과 m개의 줄 입력 
	for(int i=1; i<=n; i++) {
		cin >> a[i]; // n개의 배열공간의 1번째 요소부터 n번째까지 수를 입력 
		psum[i] = psum[i-1] + a[i]; // 누적합 배열에 저장 
	}
	for(int i=1; i<=m; i++) {
		cin >> b >> c; // b~c구간을 입력 
		cout << psum[c] - psum[b - 1] << "\n"; // b~c구간의 합이 출력 
	}
	return 0;
	
	//입력, 출력 절차 
	
	//n개의 배열 공간, m개의 구간범위 갯수 입력 
	//n
	//m
	
	//a[1]부터 a[5]까지 요소를 입력 
	//1
	//2
	//...
	//5
	
	//구간입력 및 출력 (m번 반복) 
	//1 => 1부터 
	//2 => 2까지의 합 
	//cout : 3 
	
	//2
	//5
	//cout : psum[5] - psum[1]
	///...
	
}
