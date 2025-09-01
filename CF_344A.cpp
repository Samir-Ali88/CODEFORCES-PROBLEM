#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; //total inputs
    cin>>n;
    
    vector<string>v(n);
   for(int i=0;i<n;i++){
    cin>>v[i];//adding values to vector
  
   }
     int count=1;//after adding atleast one there will be one group
    for(int i=1;i<n;i++){ //starting from 1 bacuse it wil take 0 in prev
        if(v[i] != v[i-1]){ //prev one and curr one should be compared
            count++; //incrasing the gorups of magnets
        }
    }
    cout<<count<<endl;
    return 0;
}