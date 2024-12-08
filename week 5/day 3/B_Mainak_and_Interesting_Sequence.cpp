// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
 
// Date:   2024.12.07
// Time:   08:25:31
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
    int n,e;
    cin>>n>>e;
    if(n==1){
        cyes;
        cout<<e<<endl;
    }
    else if(n>e)cno;
    else if(n%2!=0){
        cyes;
        for(int i=0;i<n-1;i++)cout<<1<<" ";
        cout<<e-(n-1)<<endl;
    }
    else {
        
        if((e-(n-2))%2!=0)cno;
        else {
              cyes;
              for(int i=0;i<n-2;i++){
          cout<<1<<" ";
        }
        cout<<(e-(n-2))/2<<" "<<(e-(n-2))/2<<endl;

        }
        
        
    }

}