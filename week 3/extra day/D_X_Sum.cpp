// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
 
// Date:   2024.11.16
// Time:   20:45:54
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
  int ar[n][m];
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>ar[i][j];
    }
  }
  int res=INT_MIN;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
    int s=ar[i][j];
    
    int k=i-1,l=j-1,x=i+1,y=j+1,o=i-1,p=j+1,q=i+1,r=j-1;
    while(k>=0&&l>=0){
      s+=ar[k][l];
      k--;l--;
    }
    
    while(x<n&&y<m){
      s+=ar[x][y];
     x++;y++;
    }
    
    while(o>=0&&p<m){
      s+=ar[o][p];
     o--;p++;
    }
    
    while(r>=0&&q<n){
      s+=ar[q][r];
     r--;q++;
    }
    if(s>res)res=s;

  }
  }
  cout<<res<<endl;
}