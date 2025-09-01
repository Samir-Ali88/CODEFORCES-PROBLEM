#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    set<char>letters;
    for(char ch :s){
        letters.insert(tolower(ch));//all letter in small letter and unique one will be in set
    }
    if(letters.size()==26){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}