/* Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.


Example 1:

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
Example 2:

Input: nums = [0]
Output: [0]
 

Constraints:

1 <= nums.length <= 104
-231 <= nums[i] <= 231 - 1
 

Follow up: Could you minimize the total number of operations done? */

#include <iostream>
#include <vector>
using namespace std;
 
void moveZeroes(vector<int> &nums)
{
    int i = 0, j = i + 1;
    while( j < nums.size() ){
        if( nums[i] == 0 ){
            if( nums[j] != 0 ){
                swap(nums[i], nums[j]);
                j++; i++;
            }else{
                j++;
            }
        }else{
            i++;
            j++;
        }
    }
}

int main()
{
    vector<int> nums = {0, 1, 0, 3, 12};
    moveZeroes(nums);

    for(int i = 0; i < nums.size(); i++){
        cout << nums[i] << " ";
    }

    return 0;
}