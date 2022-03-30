#include <stdio.h>
#include <iostream>
#include <vector>
#include <stack>
using namespace std;


// 시간복잡도 참고해서!!
// 딴 사람 코드 참고한것 
// 반절씩 나눠서 하기 

class Solution {
public:
    int searchInsert( vector<int>& nums, int target) {
     
        int n=nums.size();
        int left=0, right=n-1;
        while(left<=right)
        {
            if(left==right && nums[left]>=target)
            {
                return left;
            }
            if(left==right && nums[left]<target)
            {
                return left+1;
            }
            int mid=((right-left)/2)+left;
            if(target<nums[mid])
            {
                right=mid;
            }
            if(target>nums[mid])
            {
                left=mid+1;
            }
            else if(target==nums[mid])
            {
                return mid;
            }
        }
        return left+1;

        
    }
};

// int main()
// {
// 	Solution t1;
// 	vector<int> a = { 1, 2, 5, 6, 7 };
// 	int target = 8;
// 	cout << t1.searchInsert(a, target) << endl;
// 	return 0;
// }

//이거는 실패
