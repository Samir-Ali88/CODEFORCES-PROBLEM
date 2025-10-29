#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin>>s;
  string ans="";//empty string for ans;
  for(int i=0;i<s.size();i++){
    char c= tolower(s[i]);
    if(c!='a'&& c!='e'&& c!='i'&& c!='o'&& c!='u'&&c!='y'){
        ans+='.';
        ans+=c;
 
    }
  }
  cout<<ans;
}
