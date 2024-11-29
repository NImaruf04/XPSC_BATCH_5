// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
 
// Date:   2024.11.29
// Time:   08:50:32
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
   vector<int>m(n);
   int no=0,ze=0;
    for(int i=0;i<n;i++){
        cin>>m[i];
        if(m[i]!=0)no++;
        else ze++;
    }
    if(ze<=no+1)cout<<0<<endl;
    else{
        int ma= *max_element(m.begin(),m.end());
       if(ma==1)cout<<2<<endl;
       else cout<<1<<endl;
    }
}