#include <bits/stdc++.h>
using namespace std;
long long sc = 0;
long long so = 0;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
       
        int n;
        cin >> n;
        long long c[n],o[n];
        long long mc = INT_MAX;
        long long mo = INT_MAX;
        for(int i=0;i<n;i++){
            cin >> c[i];
            mc = min(c[i],mc);
        }
        for(int i=0;i<n;i++){
            cin >> o[i];
            mo = min(mo,o[i]);
        }
        
       sc = 0;
       so = 0;
       long long total = 0;
        for(int i=0;i<n;i++){
          //  if(c[i] != mc && o[i]!= oc)
         //   {
                total +=max(c[i]- mc ,o[i]- mo);
          //  }
              
        }
       // cout<<sc<<so;
        cout << total << endl;
    }
    
  
}