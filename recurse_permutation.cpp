// 순열 재귀적으로 풀이
#include<bits/stdc++.h>
using namespace std;
vector<int> v; 
void printV(vector<int> &v) {
	for(int i = 0; i < v.size(); i++) {
		cout << v[i] < " ";
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
		makePermutation(n, r, depth + 1); // depth는 재귀깊이 
		swap(v[i], v[depth]);
	}
	return;
}
int main() {
	/* 재귀적으로 풀이 */
	for(int i = 1; i <= 3; i++) v.push_back(i);
	makePermutation(3, 3, 0);
	
	/* C++ 내장함수 (next_permutation 활용 풀이)
	vector<int> v = {1, 2, 3};
	sort(v.begin(), v.end()); // 오름차순 정렬
	do {
	    for(int i : v) cout << i << " ";
	}while(next_permutation(v.begin(), v.end()))
	*/
	return 0;
}
