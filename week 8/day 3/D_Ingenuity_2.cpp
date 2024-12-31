// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
 
// Date:   2024.12.27
// Time:   01:03:44
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
void ns(int n,string s,vector<char>&v){
       bool tr=0,fr=0;
         for(int i=0;i<n;i++){
            if(s[i]=='N'){
                if(tr){v[i]='H';tr=0;}
                else {
                    v[i]='R';tr=1;
                }
            }
            else if(s[i]=='S'){
                if(fr){v[i]='H';fr=0;}
                else {
                    v[i]='R';fr=1;
                }
            }
         }
         return ;

}
void ew(int n,string s,vector<char>&v){
       bool tr=1,fr=1;
         for(int i=0;i<n;i++){
            if(s[i]=='E'){
                if(tr){v[i]='H';tr=0;}
                else {
                    v[i]='R';tr=1;
                }
            }
            else if(s[i]=='W'){
                if(fr){v[i]='H';fr=0;}
                else {
                    v[i] ='R';fr=1;
                }
            }
         }
   return ;
}

void solve()
{
   int n;
   cin>>n;
   string s;
   cin>>s;
    int no=0,so=0,ea=0,we=0;
    for(int i=0;i<n;i++){
        if(s[i]=='N')no++;
        else if(s[i]=='E')ea++;
        else if(s[i]=='S')so++;
        else we++;
   }
   vector<char>v(n);
   if(no%2==0&&so%2==0){
        ns(n,s,v);
   }
   else if(so%2!=0&&no%2!=0){
      ns(n,s,v);
   }
   else {cno;return;}
   if(ea%2==0&&we%2==0){
        ew(n,s,v);

   }
   else if(ea%2!=0&&we%2!=0){
       ew(n,s,v);
   }
   else {cno;return;}
   bool xrr=0;
   int cnr=0,cnh=0;
   for(int i=0;i<n;i++){
    if(v[i]=='R')cnr++;
    else cnh++;
   }
   if(cnr==0||cnh==0)cno;
   else {
   for(int i=0;i<n;i++)cout<<v[i];
   cout<<endl;}
   
   
}