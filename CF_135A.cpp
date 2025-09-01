#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>ans(n+1);
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        ans[x]=i; //x friend giving to i friend
    }
    for(int i=1;i<=n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}
//question looks soo much hard but it is easy enough