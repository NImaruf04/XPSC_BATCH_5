// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
 
// Date:   2024.12.16
// Time:   17:57:12
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
    string s,e;
    cin>>s>>e;
    int pnt=0;
    cout<<fixed<<setprecision(12);
    for(int i=0;i<s.size();i++){
        if(s[i]=='+')pnt++;
        else pnt--;
    }
    int res=0,cnt=0;
    for(int i=0;i<e.size();i++){
        if(e[i]=='?'){cnt++;continue;}
        else if(e[i]=='+')res++;
        else res--;
    }
    int sum=0;
    int xx=(1<<cnt)-1;
    
    for(int i=0;i<=xx;i++){
        int cs=res;
        int tr=i;
        for(int j=0;j<cnt;j++){
            if(tr&(1<<j))cs++;
            else cs--;
        }
        if(cs==pnt)sum++;
    }
    
    
    int jj=(1<<cnt);
    float rr=(float(sum)/jj);
    cout<<rr<<endl;
}