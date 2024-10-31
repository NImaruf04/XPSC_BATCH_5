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
    void solve();
int32_t main()
{
    NI
    solve();
    return 0;
}
void solve()
{
    int n;cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)cin>>ar[i];
    int sajina=0,mina=0,st=0,en=n-1;
    int count=0;
    while(st<=en){
        if(ar[st]<=ar[en]){
            if(count%2==0)sajina+=ar[en];
            else mina+=ar[en];
            en--;
        }
        else {
              if(count%2==0)sajina+=ar[st];
            else mina+=ar[st];
            st++;
        }
        count++;
    }
    cout<<sajina<<" "<<mina<<endl;
}