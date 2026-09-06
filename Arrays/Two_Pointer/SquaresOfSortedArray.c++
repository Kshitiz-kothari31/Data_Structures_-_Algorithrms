/* Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.

Example 1:

Input: nums = [-4,-1,0,3,10]
Output: [0,1,9,16,100]
Explanation: After squaring, the array becomes [16,1,0,9,100].
After sorting, it becomes [0,1,9,16,100].
Example 2:

Input: nums = [-7,-3,2,3,11]
Output: [4,9,9,49,121]
 
Constraints:

1 <= nums.length <= 104
-104 <= nums[i] <= 104
nums is sorted in non-decreasing order.
 
Follow up: Squaring each element and sorting the new array is very trivial, could you find an O(n) solution using a different approach? */

#include <iostream>
#include <vector>
using namespace std;
 
vector<int> sortedSquares(vector<int>& nums) 
{
    int n = nums.size();
    int st = 0, ed = n - 1, p = n - 1;
    vector<int> ans(n);
    
    while( st <= ed ){
        if( abs(nums[ed]) >= abs(nums[st]) ){
            ans[p] = nums[ed] * nums[ed];
            ed--;
        }else{
            ans[p] = nums[st] * nums[st];
            st++;
        }

        p--;
    }

    return ans;
}

int main()
{
    vector<int> nums = {-4, -1, 0, 3, 10};

    vector<int> ans = sortedSquares(nums);

    for( int i = 0; i < nums.size(); i++){
        cout << ans[i] << " ";
    }

    return 0;
}