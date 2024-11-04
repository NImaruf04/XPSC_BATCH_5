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
    map<string,string>res;
    map<string,string>temp;
    for(int i=0;i<n;i++){
        string s1,s2;
        cin>>s1>>s2;
        if(temp.find(s1)!=temp.end()){
            string st=temp[s1];
          res[st]=s2; 
          temp.erase(s1);
         temp[s2]=st;   
         //cout<<res[s1]<<" "<<temp[s2]<<endl; 
        }
        else {
            res[s1]=s2;
            temp[s2]=s1;
            //cout<<s1<<" "<<s2<<endl;
        }
    }
    cout<<res.size()<<endl;
    for(auto xx:res){
       cout<< xx.first<<" "<<xx.second<<endl;
    }

}