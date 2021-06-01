#include<bits/stdc++.h>
using namespace std;

int main() {
    long n;
    cin >> n;
    if(n == 1) {
        cout << 1;
        return 0;
    }
    if(n == 2 || n == 3) {
        cout << "NO SOLUTION";
        return 0;
    }
    if(n % 2 == 0) {
        for(int i = n / 2 - 1; i >= 0; i--) {
            cout << 2 * i + 1 << " ";
        }
    } else {
        for(int i = n / 2; i >= 0; i--) {
            cout << 2 * i + 1 << " ";
        }
    }
    for(int i = n / 2; i >= 1; i--) {
        cout << 2 * i << " ";
    }
    return 0;
}
