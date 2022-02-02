// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include <unordered_map>
#include "commoncppproblem1.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> maps;
        maps[nums[0]] = 0;
        for(int i = 1; i < nums.size(); i++) {
            auto it = maps.find(target - nums[i]);
            if(it != maps.end()) {
                return {it->second, i};
            }
            maps[nums[i]] = i;
        }
        return {};
    }
};
// @lc code=end

