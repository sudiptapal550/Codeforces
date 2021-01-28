#include <bits/stdc++.h>
#define ll long long
using namespace std;
const long mod = 1e7;
void SieveOfEratosthenes(ll n, bool prime[])
{
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
   // bool prime[n + 1];
    memset(prime, true, sizeof(prime));

    for (int p = 2; p * p <= n; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p greater than or
            // equal to the square of it
            // numbers which are multiple of p and are
            // less than p^2 are already been marked.
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
}
    int main()
    {
        bool prime[mod + 1];
        SieveOfEratosthenes(mod, prime);
        ll n;
        cin >> n;
        ll a[n];
        ll arr[n][2];
        memset(arr, 0, sizeof(arr));
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
           

            for (int i = 0; i < n; i++)
            {
                if (arr[i][0] != 0)
                    cout << arr[i][0] << " ";
                else
                {
                    cout << "-1"
                         << " ";
                }
            }
            cout << endl;
            for (int i = 0; i < n; i++)
            {
                if (arr[i][1] != 0)
                    cout << arr[i][1] << " ";
                else
                {
                    cout << "-1"
                         << " ";
                }
            }
        }
    }