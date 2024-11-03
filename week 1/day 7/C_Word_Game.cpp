// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define float double
#define endl '\n'
#define NI                       \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);               \
    cout.tie(NULL);

#define MARUF  \
    int TC;    \
    cin >> TC; \
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
    int x;
    cin >> x;
    int resa = 0, resb = 0, resc = 0;
    map<string, int> ma;
    map<string, int> mb;
    map<string, int> mc;
    set<string>s;
    for(int i=0;i<3;i++){
      for(int j=0;j<x;j++){
        string a;
        cin >> a;
       s.insert(a);

       if(i==0)ma[a]++;
       else if(i==1)mb[a]++;
       else mc[a]++;
    }}
    for(auto it:s){
       if(ma[it]>0&&mb[it]>0&&mc[it]>0)continue;
       if(ma[it]>0&&mb[it]>0&&mc[it]==0){
             resa+=1;
             resb+=1;
       }
      else  if(mb[it]>0&&mc[it]>0&&ma[it]==0){
             resb+=1;
             resc+=1;
       }
      else  if(ma[it]>0&&mc[it]>0&&mb[it]==0){
             resa+=1;
             resc+=1;
       }
       else {
        if(ma[it]>0)resa+=3;
        else if(mb[it]>0)resb+=3;
        else resc+=3;
       }
    }
    cout<<resa<<" "<<resb<<" "<<resc<<endl;
    
}