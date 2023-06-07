#include<bits/stdc++.h>
using namespace std;
int main() {
	//int a[] = {1, 2, 3};
	vector<int> a = {2, 1, 3, 200, 100};
	sort(a.begin(), a.end()); // 오름차순 정렬 
	do {
		//for(int i : a) cout << i << " ";
		for(int i = 0; i < 2; i++) {
			cout << a[i] << " ";
		} 
		cout << '\n';
	}
	// while(next_permutation(&a[0], &a[0] + 3)); // from 부터 end전 까지 
	//while(next_permutation(a, a + 3));
	while(next_permutation(a.begin(), a.end()));  
}
