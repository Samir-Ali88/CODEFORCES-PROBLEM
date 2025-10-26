#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    set<int>r;//row
    set<int>c; //col
    vector<pair<int , int>>move(m);
//enetering value to the vector
    for(int i=0;i<m;i++){
        cin>>move[i].first; 
        cin>>move[i].second;
    }
//adding value to set and then getting the ans
    for(int i=0;i<m;i++){
        int row=move[i].first;
        int col=move[i].second;

        r.insert(row);
        c.insert(col);
        long long ans= 1LL * (n-(int)r.size()) * (n-(int)c.size()); //This is the main logic which will check the code is ok or not
        cout<<ans<<" ";
    }
}
