#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int nZCnt = 0;
        int nSize = nums.size();
        int idx = 0;
        
        while (idx < nSize - nZCnt) {
            if (nums[idx] == 0) {
               
                nums.erase(nums.begin() + idx);
                nums.push_back(0);
                ++nZCnt;
            }
            else
                ++idx;
            
        }
    }
};