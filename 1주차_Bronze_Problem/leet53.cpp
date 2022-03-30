#include <stdio.h>
#include <iostream>
#include <vector>
#include <stack>
using namespace std;


// kadane's algorithm 사용
// brute force도 있음  


class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       
        int sum = nums[0];
        int maxSum = sum;
        for(int i =1; i< nums.size(); i++){
    
            if (sum +nums[i] > nums[i]) sum += nums[i];
            else
                sum = nums[i];
                maxSum - max(maxSum, sum);

        
    }
};


// int curSum =0, bestSum = INT_MIN;
        
//         for(int num : nums){
//             curSum += num;
//             if(curSum > bestSum) bestSum = curSum;
//             if(curSum <0) curSum = 0;
//         }
        
//         return bestSum;