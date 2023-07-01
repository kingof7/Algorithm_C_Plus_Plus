#include<bits/stdc++.h> // 1. C++ 표준 라이브러리의 모든 헤더 파일을 포함하는 헤더 파일

using namespace std; // 2. std 네임스페이스를 사용
vector<int> v{2,2,1,1,2,2,3,3,5,6,7,8,9};
int main() {
    sort(v.begin(),v.end()); // sorting ascending
	v.erase(unique(v.begin(), v.end()), v.end()); // 중복제거 처리 후 나머지 필요없는 부분삭제 
    for(int i : v) cout << i << " "; 
    cout << '\n';
    return 0;
}
