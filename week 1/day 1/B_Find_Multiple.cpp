#include<bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
using namespace std;

int32_t main () 
{
    int a,b,c;
    cin>>a>>b>>c;
    bool tr=0;
    for(int i=a;i<=b;i++){
          if(i%c==0){cout<<i<<endl;tr=1;break;}
          
    }
    if(!tr)cout<<-1<<endl;
    return 0;
}