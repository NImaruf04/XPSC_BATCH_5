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
    map<string,int>m;
    for(int i=0;i<n;i++){
        string s;cin>>s;
        if(m[s]==0){
            cout<<"OK"<<endl;
            m[s]++;
        }
        else {
            cout<<s<<m[s]<<endl;
            m[s]++;
        }
    }
}