#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,m,k;
        cin>>n>>m>>k;
        long long low=1,high=m;
        while(low<high){
            long long mid=(low+high)/2;
            long long blocks = m/(mid+1);
            long long rem=m%(mid+1);
            long long per_row=blocks*mid+ min(rem,mid);
            long long total=n*per_row;
            if(total>=k)high=mid;
            else{
                low =mid+1;
            }
        }
        cout<<low<<" ";
    }
    return 0;
}
