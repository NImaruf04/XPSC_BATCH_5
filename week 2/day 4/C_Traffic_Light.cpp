// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
 
// Date:   2024.11.14
// Time:   08:24:18
#include <bits/stdc++.h>
using namespace std; 
#define int long long
#define float double
#define ccase cout<<"Case"<<" "<<T<<" "<<':'<<" "
#define cyes cout<<"YES"<<endl
#define cno cout<<"NO"<<endl
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
    int n;cin>>n;
    char cr;cin>>cr;
    string s;
    cin>>s;
    s.append(s);
    //cout<<s<<endl;
    if(cr=='g')cout<<0<<endl;
    else {
       int st=0;
       int val=-1;
       while(st<(2*n)){
        if(s[st]==cr){
            int cnt=0;
            while(s[st]!='g'&&st<(2*n)){
                st++;
                cnt++;
            }
            val=max(val,cnt);
        }
        else st++;
       }
       cout<<val<<endl;
    }
}