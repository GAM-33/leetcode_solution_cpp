// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include <unordered_map>
#include "commoncppproblem3.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=3 lang=cpp
 *
 * [3] 无重复字符的最长子串
 */

// @lc code=start
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> maps;
        int max_len = 0;
        int i = 0, j = 0;
        while(j < s.size()) {
            auto it = maps.find(s[j]);
            if(it != maps.end() && maps[s[j]] >= i) {
                i = maps[s[j]] + 1;
            }
            maps[s[j]] = j;
            j++;
            max_len = max(max_len, j - i);
        }
        return max_len;
    }
};
// @lc code=end

