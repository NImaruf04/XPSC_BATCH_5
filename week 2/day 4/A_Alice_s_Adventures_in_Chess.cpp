// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
 
// Date:   2024.11.10
// Time:   21:37:00
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
    int n,a,b;
    cin>>n>>a>>b;
    string s;
    cin>>s;

    int x=0,y=0;
    bool tr=0;
    int i=0;
    int count=0;
    while(count<=10000){
        
        if(i==n)i=0;
        char k=s[i];
        if(x==a&&y==b){tr=1;break;}
        
        if(k=='N')y+=1;
        else if(k=='E')x+=1;
        else if(k=='S')y--;
        else if(k=='W')x--;
        i++;
        count++;
    }
    if(tr)cyes;
    else cno;


}