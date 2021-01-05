#include <bits/stdc++.h>
using namespace std;
#define int64 int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int64 t; cin >> t;
    for (int64 tt = 1; tt <= t; tt++) {
        int64 n; cin >> n;
        vector<int64> v(n);
        for (int64 i = 0; i < n; i++)
            cin >> v[i];
        int64 count = 0;
        for (int64 i = 1; i < n-1; i++)
            if (v[i] > v[i-1] && v[i] > v[i+1])
                count++;
        cout << "Case #" << tt << ": ";
        cout << count << "\n";
    }
}
