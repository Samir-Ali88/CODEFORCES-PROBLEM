#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    vector<int> vecA;
    vector<int> vecB;
    // lcm A
    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0)
        {
            vecA.push_back(i);
        }
    }
    // lcm B
    for (int i = 1; i <= b; i++)
    {
        if (b % i == 0)
        {
            vecB.push_back(i);
        }
    }
    // getting big value
    int gcd = 1; // ajibon gcd one thake😂
    for (int i = 0; i < vecA.size(); i++)
    {
        for (int j = 0; j < vecB.size(); j++)
        {
            if (vecA[i] == vecB[j])
            {
                gcd = max(gcd, vecA[i]);
            }
        }
    }
    cout << gcd << endl;

    return 0;
}
