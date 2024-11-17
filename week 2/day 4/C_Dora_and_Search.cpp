// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
 
// Date:   2024.11.11
// Time:   20:26:15
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
    int v[n+1];
    for(int i=1;i<=n;i++)cin>>v[i];
    bool tr=0;
    int st=1,en=n,chi=1,chj=n;
    while(st<en){
        if(v[st]!=chi&&v[en]!=chi&&v[en]!=chj&&v[st]!=chj){
            tr=1;cout<<st<<" "<<en<<endl;break;
        }
        else{
            if(v[st]==chi){
                chi++;
                st++;
            }
            else if(v[st]==chj){
                chj--;
                st++;
            }
            else if(v[en]==chi){
                en--;
                chi++;

            }
            else if(v[en]==chj){
                en--;
                chj--;
            }
        }
    }
    if(!tr)cout<<-1<<endl;
}