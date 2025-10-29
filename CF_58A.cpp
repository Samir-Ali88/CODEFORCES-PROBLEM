
#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin>>s;
string target="hello";
string ll="";
int j=0;
for(int i=0;i<s.size()&& j<target.size();i++){
    if(s[i]==target[j]){
        ll+=s[i];
        j++;
    }
}
if(ll==target){
    cout<<"YES";
}
else {
    cout<<"NO";
}
}
