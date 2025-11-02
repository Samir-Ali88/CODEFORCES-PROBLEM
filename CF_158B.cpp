#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int cnt1 = 0;
    int cnt2 = 0;
    int cnt3 = 0;
    int cnt4 = 0;
    int sum = 0;
    int taxi = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i]; // storing values in a vector and getting how many grups there are from 1-4
        if (v[i] == 4)
        {
            cnt4++;
        }
        else if (v[i] == 3)
        {
            cnt3++;
        }
        else if (v[i] == 2)
        {
            cnt2++;
        }
        else
        {
            cnt1++;
        }
    }
    // working on 4 only
    taxi += cnt4;
    // working for 3 and 1
    int pair13 = min(cnt1, cnt3);
    taxi += pair13;
    cnt1 -= pair13;
    cnt3 -= pair13;
    taxi += cnt3; // no longer 1 left so using 3 group without any one

    // working for 2 and 1
    taxi += cnt2 / 2;
    cnt2 = cnt2 % 2;
    if (cnt2 == 1)
    {
        taxi++;
        cnt1 -= min(2, cnt1); // taking more than 2 one
    }
    //if still any one exists here
    if (cnt1 > 0)
    {
        taxi += ceil(cnt1 / 4.0);
    }
    cout << taxi << endl;
}
