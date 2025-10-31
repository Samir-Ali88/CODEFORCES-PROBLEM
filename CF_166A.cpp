#include<bits/stdc++.h>
using namespace std;
//not using lembda funtion because it was not for me
bool compare(pair<int,int>a, pair<int ,int>b){
    if(a.first!=b.first){
        return a.first>b.first; //checks if problem solve is more or less
       
    }
    else{
         return a.second<b.second;//then checks the penalty time
    }
}
int main(){
 int n,k;
 cin>>n>>k;
 vector<pair<int , int>>vec;
 for(int i=0;i<n;i++){
    int a,b;
    cin>>a>>b;
    vec.push_back({a,b});
 }
 sort(vec.begin() , vec.end(),compare);
 int ans=0;
 pair<int , int>curr=vec[k-1]; //this is 0 based input and loop so
 for(int i=0;i<n;i++){
    if(vec[i]==curr){
        ans++;
    }
 }
 cout<<ans<<endl;

}
