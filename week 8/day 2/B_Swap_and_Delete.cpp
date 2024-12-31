#include<bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
using namespace std;

int32_t main () 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;while(t--) 
    {
        string s;
        cin>>s;
        
        int x=0,y=0;
        for(int i=0;i<s.size();i++ ){
            if(s[i]=='0')x++;
            else y++;
        }
        
        if(x==y){cout<<0<<endl;}
        else{
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                if(y==0)break;
                
            y--;
            
            }
            else if(s[i]=='1'){
                if(x==0)break;
               
                x--;
            }
        }
        int sum=x+y;
        cout<<sum<<endl;
        }
    }
    return 0;
}