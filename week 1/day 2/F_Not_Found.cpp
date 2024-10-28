#include<bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
using namespace std;

int32_t main () 
{
    string s;
    cin>>s;
    map<char,int>m;
    for(int i=0;i<s.size();i++){
        m[s[i]]++;
    }
    bool tr=0;
    for(char i='a';i<='z';i++){
        if(m[i]==0){tr=1;cout<<i<<endl;break;}
    }
    if(!tr)cout<<"None"<<endl;
    return 0;
}