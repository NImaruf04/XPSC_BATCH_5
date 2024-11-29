#include<bits/stdc++.h>
using namespace std;
int main(){
    int s;
    cin>>s;
    while(s--){
  int a,b;
  cin>>a>>b;
vector<int>v;
int k=0;
for(int i=a-(b);i>0;i--){
    v.push_back(i);
    k++;
}
for(int i=k+1;i<=(b)+k;i++){
    v.push_back(i);
}
v.erase(v.begin()+a,v.end());
for(int j:v){
    cout<<j<<" ";
}
cout<<endl;}}