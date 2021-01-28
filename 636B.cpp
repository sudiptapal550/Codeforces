#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    long mod = 1e9 + 7;
    while (t--)
    {       long n;
            cin >> n;
            long odd  = n/2;
            long even  = n/2;
            long sum =0;
          if(odd % 2 == 1 && even % 2==1)
            cout<<"NO";
           else
            {   cout<<"YES"<<endl;
                int f=2,s=1;
                for(int i=1;i<=n/2;i++){
                    sum +=f;
                    cout<<f<<" ";
                    f+=2;
                }
                for(int i=1;i<=n/2 -1;i++){
                    cout<<s<<" ";
                    sum -=s;
                    s+=2;
                }
                cout<<sum;
            }

        cout<<endl;


    }
return 0;
}