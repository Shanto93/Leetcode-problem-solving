#include <bits/stdc++.h>
using namespace std;


int peakIndexInMountainArray(vector<int>&arr) {
        int maxIndex = max_element(arr.begin(), arr.end())-arr.begin();
        return maxIndex;
    }
int main(){
    vector<int> arr={0, 2, 4, 5, 3, 1};
    cout << peakIndexInMountainArray(arr) << endl;

}