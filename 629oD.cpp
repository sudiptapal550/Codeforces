#include<bits/stdc++.h>
#define F(a,b) for(int i=a;i<=b;i++)
using namespace std;

int main(){

        int t;
        cin  >> t;
        while(t--){
        int n  ;
        cin >> n ;
        vector<int> a(n);
        int f=1;
        for(int i = 0 ; i< n ;i++){
            cin >> a[i];
            if(i!=0)
            {
                if(a[i-1] != a[i])
                    f=0;
            }
            
        }

     //   sort(a,a+n);
     vector<int>c(n);
    if(f==0)
     for(int i=0;i<n;i++){
         if(i%2==0)
         c[i] = 1;
         else
         c[i]  =2;   
     }
     else{
         for(int i=0;i<n;i++)
            c[i] =1;
     }
     int color = *max_element(c.begin(),c.end());
     if(a[0]!=a[n-1] && c[0] == c[n-1]){
         if(a[n-1] != a[n-2]){
        color++;  
        c[n-1] = 3;
         }
         else{
             c[n-1] = c[n-2];
         }
     }
        cout<<color<<endl;
        for(int i=0;i<n ;i++)
            cout<<c[i]<<" ";
            cout<<endl;
        }
        
}