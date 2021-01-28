#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++)
            cin >> a[i];
        if(n==1){
            cout<<"YES"<<endl;
            continue;
        }
        sort(a,a+n);
        int  f= 0;
        for(int i=0;i<n-1;i++)
        {
            if(abs(a[i] - a[i+1]) > 1)
            {
                cout<<"NO"<<endl;
                f = 1;
                break;
                
            }

        }
        if(f == 0)
        cout<<"YES"<<endl;


    }
}