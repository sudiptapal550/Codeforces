#include <bits/stdc++.h>
using namespace std;
int main()
{
    for(int i=1;i<100;i++)
    {
        if(i%3 == 2 && i%4 == 3 && i%5 == 4)
            cout<<i<<endl;
    }
}