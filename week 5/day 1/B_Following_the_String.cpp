// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
 
// Date:   2024.11.27
// Time:   18:57:00
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
     int x;
        cin>>x;
        vector<char>vl;
         vector<pair<int,char>>v;
        for(int i=0;i<26;i++){
           v.push_back({0,('a'+i)});
           
        }
        
        for(int i=0;i<x;i++){
            int sl;
            cin>>sl;
           for(int i=0;i<v.size();i++){
            if(v[i].first==sl){
                v[i].first++;
                vl.push_back(v[i].second);
                break;
            }
           }
             
        }
       
        for(auto ja:vl){
            cout<<ja;
        }
         cout<<endl;  
}