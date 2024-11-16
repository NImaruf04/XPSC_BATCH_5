// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
 
// Date:   2024.11.16
// Time:   18:15:50
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
    int ar[n][n-1];
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            cin>>ar[i][j];
        }
    }
     
     int a=-1,b=-1,cnta=0,cntb=0;
    
        for(int j=0;j<n;j++){
            if(a==-1||ar[j][0]==a){a=ar[j][0];cnta++;}
            else{cntb++;b=ar[j][0];}
        }
        int x;
        if(cnta<cntb) {cout<<b<<" ";x=a;}
        else {cout<<a<<" ";x=b;}
        int pos=-1;
       for(int j=0;j<n;j++){
          if(ar[j][0]==x){pos=j;break;}
       }
       
       for(int i=0;i<n-1;i++)cout<<ar[pos][i]<<" ";
     cout<<endl;
}