#include <stdio.h>
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> map;

        for(int num : nums){
            map[num]++;
        }
        for(int num : nums){
            if(nums.size()/2 < map[num]) return num;
        }
        return -1;
    
    }
};