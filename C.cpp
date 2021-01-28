#include <bits/stdc++.h>
using namespace std;
int n;
int w[55];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
       
        cin >> n;
        int ps[105]={0,};
        int temp[105]={0,};
        for(int i=0;i<n;i++){
           cin >>  w[i];
           ps[w[i]]++;
           temp[w[i]]++;
        }
        if(n==1){
            cout<<"0"<<endl;
            continue;
        }
        sort(w,w+n);
        int low = w[0] + w[1];
        int high = w[n-1] + w[n-2];
        int cnt = 0;
        int ans = INT_MIN;
        for(int i = high;i>=low;i--){
            cnt  = 0;
          //  ans = INT_MIN;
            for(int k=0;k<105;k++)
                ps[k] = temp[k];
            for(int j=0;j<n;j++){
                int rest = i - w[j];
                if (rest > 0 && ps[rest] > 0)
                {   if(rest == w[j] && ps[rest] >=2){
                    ps[rest]--;
                    ps[w[j]]--;
                    cnt++;
                    }
                    if (rest != w[j] && ps[rest] >= 1 && ps[w[j]] >=1){
                        ps[rest]--;
                        ps[w[j]]--;
                        cnt++;
                    }
                        //cout << rest << " " << w[j] << cnt << endl;
                }
            }
         //   cout<<i<<" ";
            ans = max(ans,cnt);
        }
   
        cout<<ans<<endl;
        
    }
}