#include <iostream>
using namespace std;

int A, B, C;
int a[101]; // 배열의 크기를 101로 변경

int main() {
    cin >> A >> B >> C;
    for (int i = 0; i < 3; i++) {
        int start, end; // start와 end를 루프 내부로 이동
        cin >> start >> end;
        for (int j = start; j < end; j++) {
            a[j]++;
        }
    }

    int sum = 0; // sum 변수를 선언 및 초기화

    for (int i = 2; i <= 100; i++) {
		if(a[i-1] == 1) sum += A;
        else if(a[i-1] == 2) sum += B*2;
        else if(a[i-1] == 3) sum += C*3;
    }
    cout << sum;
    return 0;
}
//5 3 1
//a[1] = 1 0
//a[2] = 2 5*1 5
//a[3] = 3 3*2 6 11
//a[4] = 3 1*3 3 14
//a[5] = 2 1*3 3 17
//a[6] = 1 3*2 6 23
//a[7] = 1 5*1 5 28 
//a[8] = 1 5*1 5 33
