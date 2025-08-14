#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v={8,20,10,6};

    reverse(v.begin(), v.end());
    
    for (auto u : v)
        cout << u << " ";
    cout << endl;
}