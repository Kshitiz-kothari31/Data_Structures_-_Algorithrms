// Problem : Found the index of string s, occuring in string t.

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    string s = "na";
    string t = "apna collegena";

    int S = s.size(), T = t.size();
    for(int i = 0; i < T - S + 1; i++){  // Time Complexity : O(S*T)
        if( t.substr(i, S) == s ){
            cout << "Found at index : " << i << "\n";
        }
    }

    return 0;
}