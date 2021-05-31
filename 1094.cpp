#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long x, maximum = 0, ans = 0;
    cin >> n;
    while(n--) {
        cin >> x;
        maximum = max(maximum, x);
        ans += maximum - x;
    }
    cout << ans;
    return 0;
}
