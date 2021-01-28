#include<bits/stdc++.h>
#define fast                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define endl '\n'
using namespace std;
const long long INF = (long long)1e18 + 100;
int main(){
    fast;
    int q;
    cin >> q;
    while(q--){
        int n;
        cin >> n;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin >> a[i] >> b[i];
        } 
        long long dp[n+1][3];
        memset(dp,INF,sizeof(dp));
        dp[0][0] = 1ll*0;
        dp[0][1] = 1ll*b[0];
        dp[0][2] == 1ll*2*b[0];
        for(int i=1;i<n;i++){
            for(int j=0;j<=2;j++){
                for(int k=0;k<=2;k++){
                    if(a[i] + j == a[i-1] + k) 
                        continue;
                    dp[i][j] = min(1ll*dp[i][j] , 1ll*dp[i-1][k] + j*b[i]);
                }
            }
        }
        cout<<min({dp[n-1][0],dp[n-1][1],dp[n-1][2]})<<endl;




    }
}