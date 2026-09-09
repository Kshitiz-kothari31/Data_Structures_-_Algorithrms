/* 1456. Maximum Number of Vowels in a Substring of Given Length

Given a string s and an integer k, return the maximum number of vowel letters in any substring of s with length k.

Vowel letters in English are 'a', 'e', 'i', 'o', and 'u'.

Example 1:

Input: s = "abciiidef", k = 3
Output: 3
Explanation: The substring "iii" contains 3 vowel letters.
Example 2:

Input: s = "aeiou", k = 2
Output: 2
Explanation: Any substring of length 2 contains 2 vowels.
Example 3:

Input: s = "leetcode", k = 3
Output: 2
Explanation: "lee", "eet" and "ode" contain 2 vowels.
 
Constraints:

1 <= s.length <= 105
s consists of lowercase English letters.
1 <= k <= s.length */

#include <iostream>
using namespace std;
 
int maxVowels(string s, int k) {
    int count = 0, max_count = 0, left = 0;
    for( int i = 0; i < s.length(); i++ ){
        if( s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ){
            count++;
        }
            
        if( i - left >= k ){
            if(s[left] == 'a' || s[left] == 'e' || s[left] == 'i' || s[left] == 'o' || s[left] == 'u' ){
                count--;
            }
            left++;
        }
        max_count = max(max_count, count);
    }

    return max_count;
}

int main()
{
    string s = "abciiidef"; 
    int k = 3;

    cout << "Output : " << maxVowels(s, k);
    return 0;
}