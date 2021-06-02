#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n, ans = 1;
    cin >> n;
    for(int i = 0; i < n; i++) {
        ans = 2 * ans % ((int)1e9 + 7);
    }
    cout << ans;
    return 0;
}
