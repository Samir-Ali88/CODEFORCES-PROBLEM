#include<bits/stdc++.h>
using namespace std;
int main(){
 int n;
 cin>>n;
 int temp=n;
 int flag=0;
 while(temp>0){
    int dig=temp%10;
    if(dig!=4 && dig!=7){
        flag=0;
        break;
    }
    temp/=10;
    flag=1;
 }
 if(flag==1){
    cout<<"YES"<<endl;
 }
 else{
    //cheking from 1-1000 available lucky numbers
    bool almost=false;
    int luck[]={4,7,44,47,74,77,444,447,474,477,744,747,474,777};
    for(int i=0;i<14;i++){
        if(n%luck[i]==0){
            almost=true;
            break;
        }
    }
    if(almost)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
 }

}
