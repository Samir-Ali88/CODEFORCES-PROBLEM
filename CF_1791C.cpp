// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         string s;
//         cin>>s;
//         int right =n-1;
//         int left=0;
//         while(left<right && s[right]!=s[left]){
//             right--;
//             left++;
//         }
//         int ans= right - left +1;
//         cout<<ans<<endl;
//     }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int rt=n-1;
        int lt=0;
        while(lt<rt && s[rt] != s[lt]){
            lt++;
            rt--;
        }
        int ans = rt-lt+1; 
        cout<<ans<<endl;
    }
    return 0;
}