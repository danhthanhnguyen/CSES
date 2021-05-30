#include<bits/stdc++.h>
using namespace std;

int main() {
    string dna;
    getline(cin, dna);
    fflush(stdin);
    int ans = 1, count = 0;
    char x = 'A';
    for(char c : dna) {
        if(c == x) {
            count++;
            ans = max(ans, count);
        } else {
            x = c;
            count = 1;
        }
    }
    cout << ans;
    return 0;
}
