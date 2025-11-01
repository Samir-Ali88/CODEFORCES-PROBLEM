#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ans = -1;
 
    int tempodd = 0;
    int tepmeven = 0;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
        if (vec[i] % 2 == 0)
        {
            tepmeven++;
        }
        else
        {
            tempodd++;
        }
    }
    if (tepmeven == 1)
    {
        for (int i = 0; i < n; i++)
        {
            if (vec[i] % 2 == 0)
            {
                ans = i;
                break;
            }
        }
    }
    else if (tempodd == 1)
    {
        for (int i = 0; i < n; i++)
        {
            if (vec[i] % 2 != 0)
            {
                ans = i;
                break;
            }
        }
    }
    cout << ans + 1 << endl;
}
