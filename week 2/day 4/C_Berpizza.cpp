// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
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

class compare{
      public:
      bool operator()(pair<int,int>p1,pair<int,int>p2){        //operator()  is a oop function 
          if(p1.first>p2.first)return false;
          else if(p1.first==p2.first){
            if(p1.second>p2.second)return true;
            else return false;
          }
          else return true;
      }
};
int32_t main()
{
    NI
    solve();
    return 0;
}
void solve()
{
    int N=500000;
    int vis[N];
    int n;cin>>n;
    queue<int>q;
    priority_queue<pair<int,int>,vector<pair<int,int>>,compare>p;
    int ar=0;
   for(int i=1;i<=n;i++){
        int x;cin>>x;
        if(x==1){
            ar++;
            vis[ar]=0;
            int k;cin>>k;
            q.push(ar);
            p.push({k,ar});
        }
        else if(x==2){
            
            while(!q.empty()){
                if(!vis[q.front()]){
                    cout<<q.front()<<" ";
                    vis[q.front()]=1;
                    q.pop();
                    break;
                }
                q.pop();
            }
        }
        else {
            while(!p.empty()){
                if(!vis[p.top().second]){
                     cout<<p.top().second<<" ";
                    vis[p.top().second]=1;
                    p.pop();
                    break;
                }

                p.pop();
            }
        }
    }
}