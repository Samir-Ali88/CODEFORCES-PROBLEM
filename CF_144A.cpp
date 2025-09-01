#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int Maxidx=0; //this is for tallest soilder index that where he is now
    int Minidx=0;//this is for shortest soilder index that where he is now
    int maxht=v[0];//maximum height
    int minht =v[0]; //minimum height
    for(int i=0;i<n;i++){
       if(v[i]>maxht){ //if index height is biggger than current height
        maxht=v[i]; //this is now big height
        Maxidx=i; //i value changes
       } 
    }
    for(int i=0;i<n;i++){
        if(v[i]<=minht){ //if right one is now smaller
            minht=v[i];
            Minidx=i;
        }
    }
    int ans = Maxidx +(n-1-Minidx); //main ans logic
    if(Maxidx>Minidx){ //if max h is bigger we got more operation saved
        ans-=1;
    }
    cout<<ans<<endl;
    return 0;
}