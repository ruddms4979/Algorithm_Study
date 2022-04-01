#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> ans;
        for(int i=0;i<=num;i++){
            int cnt=0;
            int now = i;
            int temp;
            while(1){
                if(now==0)break;
                if(now%2==1){
                    cnt++;
                }
                now/=2;
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};