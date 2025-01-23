// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
 
// Date:   2025.01.23
// Time:   13:15:28
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
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)cin>>ar[i];
    sort(ar,ar+n);
    auto ch=[&](int min){
         int cnt=1;
         int st=0,en=0;
         while(en<n){
            if((ar[en]-ar[st])>2*min){
                cnt++;
                st=en;
                
            }
           
                en++;
            
         }
         return cnt<=3;
    };
    int l=0,r=1e9;
    int res;
    while(l<=r){
        int mid=(l+((r-l)/2));
        if(ch(mid)){
            res=mid;
            r=mid-1;
        }
        else l=mid+1;
    }
    cout<<res<<endl;

}