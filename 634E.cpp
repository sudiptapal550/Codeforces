#include<bits/stdc++.h>
#define F(a,b) for(int i=a;i<=b;i++)
using namespace std;

int main(){


    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>v(n);
        for(int i=0; i < n ;i++)
            cin >> v[i];
        vector<vector<int>> cnt(26, vector<int>(n + 1));
        for(int i=0;i<n;i++){
            for(int j=0;j<26;j++){
               cnt[j][i+1] = cnt[j][i];
            }
            ++cnt[v[i] - 1][i+1];
        }
        int ans = 0;
        for(int i= 0; i<26;i++){
            ans  =max(ans, cnt[i][n-1]);
        }
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                int cntin=0,cntout=0;
                for(int k=0;k<26;k++){
                    cntin = max(cntin , cnt[k][j+1] - cnt[k][i]);
                    cntout = max(cntout, min(cnt[k][i],cnt[k][n] - cnt[k][j+1])*2);
                }
                ans = max(ans, cntin+ cntout);
            }
        }

    cout<<ans<<endl;


        
    }
}