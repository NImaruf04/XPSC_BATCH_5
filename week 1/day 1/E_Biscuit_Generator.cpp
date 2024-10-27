#include <bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
using namespace std;

int32_t main()
{
    int a, b, t;
    cin >> a >> b >> t;
    int res=0;
    int i;
    for( i=a;i<=t;i+=a){
           res+=b;
    }
     //res+=(b/a)/2;
    cout<<res<<endl;
    return 0;
}