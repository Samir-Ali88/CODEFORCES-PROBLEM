#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int m1=a*b*c;
    int m2=a+b*c;
    int m3=a*b+c;
    int m4=(a+b)*c;
    int m5=(b+c)*a;
    int m6=a+b+c;
    int mx=m1;
    if(m2>mx){
        mx=m2;
    }
    if(m3>mx){
        mx=m3;
    }
    if(m4>mx){
        mx=m4;
    }
    if(m5>mx){
        mx=m5;
    }
    if(m6>mx){
        mx=m6;
    }
    cout<<mx<<endl;
}
