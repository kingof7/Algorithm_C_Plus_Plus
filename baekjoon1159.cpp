#include<bits/stdc++.h>
using namespace std;
bool flag = false;
int main() {
    int N;
    cin >> N;

    int man[26] = {}; // Initialize the array with zeros

    for(int i = 0; i < N; i++) {
        string name;
        cin >> name;
        man[name[0] - 'a']++;
    }

    for(int i = 0; i < 26; i++) { // Loop through the entire alphabet
        if(man[i] >= 5) {
        	flag = true;
            cout << char(i + 'a');
        }
    }
    if(!flag) cout << "PREDAJA";

    return 0;
}
