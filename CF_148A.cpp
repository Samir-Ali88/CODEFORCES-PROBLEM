#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,l,m,n;
    long long d;
    cin>>k>>l>>m>>n>>d;
    if(k==1 || l==1 || m==1 || n==1){ //if dragon is only beaten in way then total dragon will be answer
        cout<<d<<endl;
        return 0;
    }
    int damage=0;
    for(int i=1;i<=d;i++){
        if(i%k==0 || i%l==0 || i%m==0 || i%n==0 ){ //checking if total dragon is divisable by l,m,n,k theb it will get damged
            damage++;
        }
    }
    cout<<damage<<endl;
    return 0;
}