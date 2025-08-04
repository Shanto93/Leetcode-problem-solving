#include <bits/stdc++.h>

using namespace std;

int value(char c)
{
    switch (c)
    {
    case 'M':
        return 1000;
    case 'D':
        return 500;
    case 'C':
        return 100;
    case 'L':
        return 50;
    case 'X':
        return 10;
    case 'V':
        return 5;
    case 'I':
        return 1;

    default:
        return 0;
    }
}

int romanToInt(string s)
{
    int total = 0;
    for(int i =0; i<s.length(); ++i){
        int pre = value(s[i]);
        int next = i + 1 < s.length()? value(s[i+1]) : 0;

        if(pre < next){
            total -= value(s[i]);
        }else{
            total += value(s[i]);
        }
        
    }
    return total;
}

int main()
{
    cout << romanToInt("LVIII") << endl;
}