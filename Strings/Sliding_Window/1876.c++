/* 1876. Substrings of Size Three with Distinct Characters

A string is good if there are no repeated characters.

Given a string s​​​​​, return the number of good substrings of length three in s​​​​​​.

Note that if there are multiple occurrences of the same substring, every occurrence should be counted.

A substring is a contiguous sequence of characters in a string.

Example 1:

Input: s = "xyzzaz"
Output: 1
Explanation: There are 4 substrings of size 3: "xyz", "yzz", "zza", and "zaz". 
The only good substring of length 3 is "xyz".
Example 2:

Input: s = "aababcabc"
Output: 4
Explanation: There are 7 substrings of size 3: "aab", "aba", "bab", "abc", "bca", "cab", and "abc".
The good substrings are "abc", "bca", "cab", and "abc".
 

Constraints:

1 <= s.length <= 100
s​​​​​​ consists of lowercase English letters. */

#include <iostream>
using namespace std;
 
int countGoodSubstrings(string s) {
    int i = 0, count = 0;
    for( int j = 1; j < s.length(); j++ ){
        if( s[j] == s[i] ){
            i++;
        }else if( s[j] == s[j-1] ){
            i = j;
        }else{
            if( (j-i) == 2 ){
                count++;
                i++;
            }
        }
    }

    return count;
}

int main()
{
    string s = "xyzzaz";
    cout << "Output : " << countGoodSubstrings(s) << endl;

    string s2 = "aababcabc";
    cout << "Output : " << countGoodSubstrings(s2) << endl;

    return 0;
}