#include<bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
using namespace std;

int32_t main () 
{
    int a,b;cin>>a>>b;
    int tot=0;
    if(a>b){tot+=a;a--;}
    else {tot+=b;b--;}
    if(a>b){tot+=a;a--;}
    else {tot+=b;b--;}
    cout<<tot<<endl;
    return 0;
}