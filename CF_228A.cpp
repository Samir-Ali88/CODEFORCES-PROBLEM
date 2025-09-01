#include<bits/stdc++.h>
using namespace std;
int main(){
    int s1,s2,s3,s4;
    cin>>s1>>s2>>s3>>s4;
    set<int>s{s1,s2,s3,s4};
    int shoes= 4-s.size();//deletes duplicate 
    cout<<shoes<<endl;
    return 0;
}