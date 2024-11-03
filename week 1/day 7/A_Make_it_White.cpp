#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    while(x--){
int a;
cin>>a;
string s;
cin>>s;
int p,q;
for(int i=0;i<a;i++){
    if(s[i]=='B'){
     p=i;
     break;
    }
}
for(int i=a-1;i>=0;i--){
    if(s[i]=='B'){
        q=i;
        break;
    }
}
cout<<q-p+1<<endl;

}
}