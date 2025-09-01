#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    double sum=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        sum+=x;
    }
    double avg= sum/n;
    cout << fixed << setprecision(6) << avg << endl; //print limit 10^-4
    return 0;
}