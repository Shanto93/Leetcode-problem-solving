#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v={2,5,1,9,3,5,3,12,3,4,5};

    // sort(v.begin(), v.end());
    // sort(v.begin()+1, v.begin()+8);
    // sort(v.begin(), v.end(), greater<int>());
    sort(v.rbegin(), v.rend());
    
    for (auto u : v)
        cout << u << " ";
    cout << endl;
}