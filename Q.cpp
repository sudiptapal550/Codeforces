#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll mod = 1e9 + 7;
int main()
{
    ll n;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n - 1; i++)
        cin >> arr[i];
    ll ans = 1ll;
    for (int i = 1; i <= (n - 4) / 2; i++)
        ans = (ans * (n - 2)) % mod;
    ans = (ans * (n - 2) * (n - 1)) % mod;
    cout << ans << endl;
}