#include <bits/stdc++.h>
using namespace std;
const long mod = 998244353;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    bool dp[n + 1][203];
    memset(dp, false, sizeof(dp));
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] != -1)
            dp[i][arr[i]] = 1;
    }
    if(n==2 && arr[0]==arr[1] && arr[0]==-1)
    {
        cout<<"200"<<endl;
        return 0;
    }
    long long ans = 1;
    if (arr[0] == arr[1] == -1)
    {
        for (int i = 1; i <= 200; i++)
            dp[0][1] = 1;
        //ans = 200;
    }
    if (arr[0] == -1 && arr[1] != -1)
    {
        for (int i = 1; i <= arr[1]; i++)
            dp[0][1] = 1;
       // ans = arr[1];
    }
    if (arr[n-1] == arr[n-2] == -1)
    {
        for (int i = 1; i <= 200; i++)
            dp[n-1][1] = 1;
    }
    if (arr[n-1] == -1 && arr[n-2] != -1)
    {
        for (int i = 1; i <= arr[n-2]; i++)
            dp[0][n-1] = 1;
    }
    for(int i=1;i<=n-2;i++){
        if(arr[i] != -1)
            continue;

        if(arr[i+1] == -1){
            for(int j=1;j<=200;j++){
                dp[i][j] = 1;
            }
            ans = (ans * 200) % mod;
        }
        else{
            int cnt  = 0;
            for(int j=1;j<=200;j++){
                if(dp[i-1][j]){
                    if(j <= max(j,arr[i+1])){
                        dp[i][j] = 1;
                        cnt++;
                    }
                }
                else{
                    if(j <= arr[i]){
                        dp[i+1][j] = 1;
                        cnt++;
                    }
                }

            }
            ans = (ans*cnt)%mod;
        }
       
    }
    cout << ans << endl;
}