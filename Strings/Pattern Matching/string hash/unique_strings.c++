// Find the number of unique strings.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int p = 31;
const int N = 1e5+3, m = 1e9+7;
vector<long long> powers(N);

long long calculate_hash(string s){
    long long hash = 0;
    for(int i = 0; i < s.size(); i++ ){
        hash = ( hash + (s[i] - 'a' + 1) * powers[i] ) % m;
    }

    return hash;
}
 
int main()
{
    vector<string> strings = {"aa", "ab", "aa", "b", "cc", "aa"};

    // 1. Brute Force
    // sort(strings.begin(), strings.end()); // Time Complexity : O(m * nlogn)
    
    // int distinct = 0;
    // for(int i = 0; i < strings.size(); i++){
    //     if( i == 0 or strings[i] != strings[i-1] ){
    //         distinct++;
    //     }
    // }

    // cout << "No of different strings : " << distinct;
    
    powers[0] = 1;
    for(int i = 1; i < N; i++){
        powers[i] = (powers[i-1] * p) % m;
    }
    
    vector<long long> hashes;
    for(auto w : strings){
        hashes.push_back(calculate_hash(w));
    }
    
    sort(hashes.begin(), hashes.end());
    int distinct = 0;
    for(int i = 0; i < hashes.size(); i++){
        if( i == 0 or hashes[i] != hashes[i-1] ){
            distinct++;
        }
    }

    cout << "No of different strings : " << distinct;
    
    return 0;
}