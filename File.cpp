#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter a file name:";
    string s;
    cin >> s;
    fstream file;
    unordered_map<string, int> um;
    file.open(s.c_str());
    string word;
    while (file >> word)
    {
        um[word]++;
    }
    for (auto i = um.begin(); i != um.end(); i++)
        cout << i->first << " " << i->second<< endl;
    cout<<"Total unique no:"<<um.size()<<endl;
}