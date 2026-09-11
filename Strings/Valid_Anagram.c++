/* 242. Valid Anagram

Given two strings s and t, return true if t is an anagram of s, and false otherwise.

Example 1:

Input: s = "anagram", t = "nagaram"

Output: true

Example 2:

Input: s = "rat", t = "car"

Output: false

Constraints:

1 <= s.length, t.length <= 5 * 104
s and t consist of lowercase English letters. */

#include <iostream>
#include <unordered_map>
using namespace std;

bool isAnagram(string s, string t) {

    if( (s.length() > t.length()) || (s.length() <  t.length()) ){
        return false;
    }
        
    unordered_map<char, int> m;

    for(int i = 0; i < s.length(); i++){
        if( m.find(s[i]) != m.end() ){
            m[s[i]]++;
        }else{
            m[s[i]] = 1;
        }
    }

    for(int j = 0; j < t.length(); j++){
        if( m.find(t[j]) == m.end() ){
            return false;
        }else if( m[t[j]] == 0 ){
            return false;
        }else{
            m[t[j]]--;
        }
    }

    return true;
}
 
int main()
{
    string s = "anagram"; 
    string t = "nagaram";

    if( isAnagram(s, t) ){
        cout << "Output : True";
    }else{
        cout << "Output : False";
    }

    return 0;
}