#include <bits/stdc++.h>
using namespace std;
#define int64 int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int64 t; cin >> t;
    for (int64 tt = 1; tt <= t; tt++) {
        int64 n; cin >> n;
        vector<int64> v(n+1,0);
        int64 sum = 0;
        for (int64 i = 1; i <= n; i++) {
            int64 x; cin >> x;
            sum += x;
            v[i] = sum;
        }
        int64 count = 0;
        for (int64 i = n; i > 0; i--) {
            for (int64 q = i-1; q >= 0; q--) {
                int64 x = v[i]-v[q];
                int64 y = sqrt(x);
                if (y*y == x) count++;
            }
        }
        cout << "Case #" << tt << ": ";
        cout << count << "\n";
    }
}
