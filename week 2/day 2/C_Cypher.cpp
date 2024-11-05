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
        vector<int>v;
        for(int i=0;i<n;i++){
            int k;
            cin>>k;
            v.push_back(k);
        }
        for(int i=0;i<n;i++){
            int z;
            cin>>z;
            for(int j=0;j<z;j++){
                char x;
                cin>>x;
                if(x=='D'){
                     v[i]++;
                }
                else{
                    v[i]--;
                }
                if(v[i]==10){v[i]=0;}
                if(v[i]==-1){v[i]=9;}
            }
        }
        for(int kl:v){
            cout<<kl<<" ";
        }
        cout<<endl;
}