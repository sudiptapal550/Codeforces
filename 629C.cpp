#include<bits/stdc++.h>
#define F(a,b) for(int i=a;i<=b;i++)
using namespace std;

int main(){


    int t;
    cin >> t;
    while(t--){

        int n;
        cin >>n;
        string s = "";
        cin >> s;
        string s1="",s2="";
        int f=0;
        for(int i=0;i<n;i++){
            if(s[i] == '0')
            {
                s1+='0';
                s2+='0';       
            }
            else if(f==1){
                s1+='0';
                s2+=s[i];
            }
            else if(s[i] == '1')
            {   
                if(f==0){
                s1+='1';
                s2+='0';
                f=1;
                }
            }
            else{
                s1+='1';
                s2+='1';
            }
                         
                
       }
       cout<<s1<<endl<<s2<<endl;
        
    }
}