#include <bits/stdc++.h>
using namespace std;
#define int64 int64_t

// Binary Exponentiation
int64 modpow(int64 x, int64 n, int64 m) {
    if (n == 0) return 1 % m;
    int64 u = modpow(x, n/2, m);
    u = (u * u) % m;
    if (n % 2 == 1) u = (u * x) % m;
    return u;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int64 t; cin >> t;
    for (int64 tt = 1; tt <= t; tt++) {
        int64 n; cin >> n;
        vector<int64> v(n);
        for (int64 i = 0; i < n; i++)
            cin >> v[i];
        int64 ans = 0;
        for (int64 i = n-1; i > 0; i--) {
            for (int64 q = 0; q < i; q++) {
                int64 add = modpow(2,i-q-1,1e9+7)*(v[i]-v[q]);
                ans += add;
                ans %= (int64)1e9+7;
            }
        }
        cout << "Case #" << tt << ": ";
        cout << ans << "\n";
    }
}
