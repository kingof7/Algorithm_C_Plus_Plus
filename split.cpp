#include <bits/stdc++.h>
using namespace std;

vector<string> split(string input, string delimiter) {
    vector<string> ret; // 배열 == vector
    long long pos = 0;
    string token = "";
    // input = "abcdffabcdffabcdffabcd", delimiter = "ff"
    while((pos = input.find(delimiter)) != string::npos) { // string::npos == -1
        token = input.substr(0, pos);
        ret.push_back(token);
        input.erase(0, pos + delimiter.length());
        // vector<string> ret = ['abcd', 'abcd', ... , 'abcd'];
    }
    // abcdabc erase(0, 4+2), erase(0, 6) : 앞에서 부터 4개를 삭제
    ret.push_back(input);
    return ret;
}

int main() {
    string s ="abcdffabcdffabcdffabcd", d = "ff";
    vector<string> a = split(s, d);
    // a = ['abcd','abcd',...,'abcd'];
    for(string b : a) cout << b << "\n";
    // abcd
    // abcd
}
