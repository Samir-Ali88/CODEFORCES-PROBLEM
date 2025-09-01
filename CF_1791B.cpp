#include <bits/stdc++.h>
using namespace std;
;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        pair<int, int> cord = {0, 0};

        for (int i = 0; i < n; i++)
        {
            if (cord.first == 1 && cord.second == 1)
            {
                cout << "YES" << endl;
                
                break;
            }
            else if (s[i] == 'L') //left side
            {
                cord.first--;
            }
              else if (s[i] == 'R') //right side
            {
                cord.first++;
            }
             else if (s[i] == 'U')
            {
                cord.second++;
            }
             else if (s[i] == 'D')
            {
                cord.second--;
            }
            else{
                 cout<<"NO"<<endl;
            }
        }
       
    }
    return 0;
}