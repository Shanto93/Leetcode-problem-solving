#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v={3,5,2,3,5,7,7,9,1};

    sort(v.begin(), v.end());
    int sz = unique(v.begin(), v.end()) - v.begin();
    
    for (int i = 0; i < sz; i++)
        cout << v[i] << " ";
    cout << endl;
}