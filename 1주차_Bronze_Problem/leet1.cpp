#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int tem = 0;
        int flag = 0;
        vector<int> answer;
        
        for(int i =0; i<nums.size();i++){
            tem += nums[i];
            if(flag==1)
                break;
            for(int j=i+1; j<nums.size();j++){
                if(nums[j]+tem == target){
                    answer.push_back(i);
                    answer.push_back(j);
                    flag=1;
                    break;
                }
            }
            tem = 0;
        }
        return answer;
        
    }
};

int main(){


}