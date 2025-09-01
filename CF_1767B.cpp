#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; // test case
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n; // number of boxes
        cin >> n;
        vector<int> vec(n); // vector size of n
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }                             // entering all the numbers
        sort(vec.begin(), vec.end()); // sorting for easy
        int ans = 0;                  // initail stage
        int small = vec[0];           // small one is in there
        for (int i = 0; i < n - 1; i++)
        {

            if (small < vec[i + 1])
            { // main logic is here
                ans += vec[i + 1] - small;
            }
        }
        cout << ans << endl;
    }
    return 0;
}