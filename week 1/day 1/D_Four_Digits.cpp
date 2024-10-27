#include<bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
using namespace std;

int32_t main () 
{
    string s;cin>>s;
    for(int i=0;i<4-s.size();i++){
        cout<<'0';
    }cout<<s<<endl;
    return 0;
}