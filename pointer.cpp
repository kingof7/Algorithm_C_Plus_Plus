// 연결리스트
//  ___________________________
// | 노드 클래스 (데이터있음) | next라는 포인터를 갖음 (다음 노드의 주소를 가지고 있음)
// ---------------------------
#include<bits/stdc++.h>
using namespace std;
double a = 4.4;
int c = 10;
int main() {
	// int <= int 타입
	// int* <= int 포인터 타입 
	// <타입> * <변수명> = &<해당 타입의 다른 변수의 주소> 
	// 포인터는 자료형이아니라 OS의 비트에따라 (32/64비트) 주소를 갖는다
	// 32비트 운영체제 : 4바이트
	// 64비트 운영체제 : 8바이트 
	double* b = &a;
	int* d = &c;
	cout << sizeof(b) << '\n';
	cout << sizeof(d) << '\n';
	
	// pointer : 변수의 주소값
	// 선언,할당 방법 : 포인터는 타입* 변수명 = 주소
	// pointer의 크기는 고정, (OS의 비트에 따라) 
}

