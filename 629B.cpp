#include<bits/stdc++.h>
#define F(a,b) for(int i=a;i<=b;i++)
using namespace std;

int main(){


        int n ,k ;
        cin >> n >> k;
        vector<long> a(n);
        for(int i = 0 ; i< n ;i++){
            cin >> a[i];
        }

     //   sort(a,a+n);
        int sum =0 ;
        int min = INT_MAX;
        for(int i=0;i<=n-k;i++){
            sum =0;
            sort(a.begin()+i,a.begin() + k+i);
             int mid = (i + k +i)/2;
            for(int j=i ;j< i+k ;j++){
                sum += abs(a[mid] - a[j] );
            }
            if(min > sum)
            {
                min = sum;
            }
        }
        cout<<min<<endl;
        
}