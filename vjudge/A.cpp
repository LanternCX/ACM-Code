#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll n, s;
    cin >> n >> s;
    vector<ll> c(n), y(n);
    for(int i = 0; i < n; i++){
        cin >> c[i] >> y[i];
        
    }

    ll ans = c[0] * y[0];
    ll cost = c[0]; 
     for (int i = 1; i < n; ++i) {
        cost = cost + s < c[i] ? cost + s : c[i];

        ans += cost * y[i];
    }

    cout << ans << '\n';
    return 0;
}
/**
 * 
 */