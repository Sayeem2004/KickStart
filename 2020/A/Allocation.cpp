#include <bits/stdc++.h>
using namespace std;
#define int64 int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int64 t; cin >> t;
    for (int64 tt = 1; tt <= t; tt++) {
        int64 n, b; cin >> n >> b;
        vector<int64> v(n);
        for (int64 i = 0; i < n; i++)
            cin >> v[i];
        sort(v.begin(),v.end());
        int64 sum = 0, count = 0;
        for (int64 i = 0; i < n && sum < b; i++) {
            if (sum + v[i] <= b) {
                sum += v[i];
                count++;
            } else {
                break;
            }
        }
        cout << "Case #" << tt << ": ";
        cout << count << "\n";
    }
}
