#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    long mod = 1e9 + 7;
    while (t--)
    {
        long n;
        cin >> n;
        int k=2;
        int d = pow(2,k) -1;
        while(n % d !=0)
        {   
            k++;
            d = pow(2,k)  -1;
        }
        cout<<(n/d)<<endl;


    }
return 0;
}