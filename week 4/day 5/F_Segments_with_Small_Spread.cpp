// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
 
// Date:   2024.11.24
// Time:   23:23:40
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define float double
#define cyes cout<<"YES"<<endl
#define cno cout<<"NO"<<endl
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
    int n,e;
    cin>>n>>e;
    int ar[n];
    multiset<int>s;
    for(int i=0;i<n;i++){cin>>ar[i];}
    int st=0,en=0,cnt=0;
    //cout<<*prev(s.end())<<endl;
    while(en<n){
        s.insert(ar[en]);
        if((*prev(s.end()))-(*s.begin())<=e){
            cnt+=en-st+1;
        }
        else{
            while(st<=en){
                if(*prev(s.end())-*s.begin()<=e)break;
                s.erase(s.find(ar[st]));
                st++;
            }
            cnt+=en-st+1;
        }
        en++;
    }
    cout<<cnt<<endl;
    
}