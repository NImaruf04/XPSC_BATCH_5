// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
using namespace std; 
#define int long long
#define float double
#define endl '\n'
#define NI                       \
    ios::sync_with_stdio(false);  \
    cin.tie(NULL);                 \
    cout.tie(NULL);                 \
 
#define MARUF                  \
    int TC;                     \
    cin >> TC;                   \
    for (int T = 1; T <= TC; T++) 
void solve();
int32_t main()
{
    NI MARUF
    {
        solve();
    }
    return 0;
}
void solve()
{
     string s;
        cin>>s;
        
        int countb=0,countB=0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='B'){
                countB++;
                  s[i]='1';
                }
              
          else   if(s[i]=='b'){
                countb++;
                s[i]='1';
            }
            else if(s[i]>='a'&&s[i]<='z'&&countb>0){s[i]='1'; countb--;}
            else if(s[i]>='A'&&s[i]<='Z'&&countB>0){s[i]='1'; countB--;}
        }
        for(int i=0;i<s.size();i++){
            if(s[i]!='1')cout<<s[i];
        }
        cout<<endl;
}