#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n; //how many rooms are there
    int count=0; //how many room have for them
    for(int i=0;i<n;i++){
        int p,q;
        cin>>p>>q; //p==how many person staying q==total space
        if(p<=q){
            if(q-p>=2){
                count++;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}