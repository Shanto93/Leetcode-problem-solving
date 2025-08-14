#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v={5,9,2,3,7,1};
    vector<int>::iterator m = max_element(v.begin(), v.end());

    cout<<*m<<endl;
}