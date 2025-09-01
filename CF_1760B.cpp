#include<bits/stdc++.h>
using namespace std;
int main(){
    //main focus getting highest char value
    int t; //total test cases
    cin>>t;
      
    for(int i =0 ;i<t;i++){
        int n;//length of a string
        cin>>n;
        string s;
        cin>>s;
          int num=0;
        for(char val : s){ //checking values of string
          
            num = max(num , val - 'a'  ); //geting the max num
          
        }
          cout<<num+1<<endl;
        
    }
    return 0;
    
}