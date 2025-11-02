#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int lw = 0; // lowercasse letter
    int up = 0; // uppercase letter
    int n = s.size();
    char fst = s[0]; // first idx of string
 
    for (int i = 0; i < s.size(); i++)
    {
 
        if (isupper(s[i]))
            up++;
        else
            lw++;
    }
 
    if (up == n)
    { // all are uppercase
        string ans = "";
        for (int i = 0; i < n; i++)
            ans+=tolower(s[i]);
        cout << ans << endl;
    }
    else if (islower(fst) && up == n - 1 && lw == 1)
    { // if first lette is lower others are upper
        string ans = "";
        ans += toupper(fst);
        for (int i = 1; i < n; i++)
            ans += tolower(s[i]);
        cout << ans << endl;
    }
    else
    { // accident case mixed lower and upper
        cout << s << endl;
    }
}
