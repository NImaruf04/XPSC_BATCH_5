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
    map<string,int>col;
    //map<string,int>spe;
    cin.ignore();
    while(n--){
        string s;
        getline(cin,s);
        col[s]++;
    }
    //for(auto x:col)cout<<x.first<<endl;

   cout<<col.size()<<endl;
}