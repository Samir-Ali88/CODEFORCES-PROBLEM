#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool hard= false;
    
  
    for(int i=0;i<n;i++){
        int nums;
        cin>>nums;
        if(nums==1){
            hard= true;
        }
        
    }
    if(hard==true){
        cout<<"HARD";
    }
    else{
        cout<<"EASY";
    }
          
    return 0;
}