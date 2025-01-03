// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
 
// Date:   2025.01.03
// Time:   11:19:36
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
    int n,m;
    cin>>n>>m;
    char ar[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>ar[i][j];
        }
    }
    char res[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            res[i][j]='k';
        }
    }
   for(int j=0;j<m;j++){
    int cnt=0,pos=n-1;
        for(int i=n-1;i>=0;i--){
            if(ar[i][j]=='*')cnt++;
            if(ar[i][j]=='o'||i==0){
                
                if(ar[i][j]=='o')res[i][j]='o';
                for(int k=pos;k>pos-cnt;k--){
                    res[k][j]='*';
                }
                pos=i-1;
                cnt=0;
            }
            //if(j==1)cout<<cnt<<endl;
        }
   }
   for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           if( res[i][j]=='k')cout<<'.';
           else cout<<res[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
}