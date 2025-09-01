#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;//test cases
    cin>>t;
    for(int i=0;i<t;i++){
        int n; //length of a string
        cin>>n;
        string s;
        int score=0;
        cin>>s; //entering the string
        set<int>check;//set for checking the unique nums
        for(char value:s){ 
            int ans= value -'A'; //main thing which makes our work done
            if(check.count(value)==0){
                score =score+2;  //if count value is 0 means it is unique
                check.insert(value);//then add value
            }
            else{
                score= score +1;
            }
        }
        cout<<score<<endl;

    }
return 0;
}