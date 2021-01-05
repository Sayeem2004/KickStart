#include <bits/stdc++.h>
using namespace std;
#define int64 int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int64 t; cin >> t;
    for (int64 tt = 1; tt <= t; tt++) {
        int64 n, x; cin >> n >> x;
        vector<int64> v(n);
        for (int64 i = 0; i < n; i++)
            cin >> v[i];
        int64 ans = x;
        for (int64 i = n-1; i >= 0; i--)
            ans = ans/v[i] * v[i];
        cout << "Case #" << tt << ": ";
        cout << ans << "\n";
    }
}
