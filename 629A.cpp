#include<bits/stdc++.h>
#define F(a,b) for(int i=a;i<=b;i++)
using namespace std;

int main(){


    int t;
    cin >> t;
    while(t--){

        long a,b;
        cin >>a >>b;
        if(a % b  == 0)
            cout <<"0"<<endl;
        else
        cout<<(b - a%b)<<endl;

        
    }
}