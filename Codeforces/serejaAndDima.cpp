#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, total_s = 0, total_d = 0, turn = 1;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    while (!v.empty())
    {
        if (turn == 1)
        {
            if (v[0] > v.back())
            {
                total_s += v[0];
                v.erase(v.begin());
            }
            else
            {
                total_s += v.back();
                v.pop_back();
            }
            turn = 2;
        }
        else
        {
            if (v[0] > v.back())
            {
                total_d += v[0];
                v.erase(v.begin());
            }
            else
            {
                total_d += v.back();
                v.pop_back();
            }
            turn = 1;
        }
    }

    cout << total_s << " " << total_d << endl;
}