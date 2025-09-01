#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            cout<<"I love"<<" "; //if even
        }
        else{
            cout<<"I hate"<<" "; //or it is odd
        }
        if(i==n){
            cout<<"it"; //if the loops end then there will be one it

        }
        else{
            cout<<"that"<<" "; //otherwise it is just ending i'th sentence
        }
    }
    return 0;
}