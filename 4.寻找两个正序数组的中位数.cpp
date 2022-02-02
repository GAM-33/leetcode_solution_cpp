// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem4.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=4 lang=cpp
 *
 * [4] 寻找两个正序数组的中位数
 */

// @lc code=start
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        int p1 = 0, p2 = 0;
        int mid = (m + n) / 2;
        vector<int> half(mid + 1);
        for(int i = 0; i < mid + 1; i++) {
            if(nums1[p1] < nums2[p2]) {
                half.push_back(nums1[p1]);
                p1++;
            }
            else {
                half.push_back(nums2[p2]);
                p2++;
            }
        }
        double mid_value = 0;
        if((m + n) % 2) {
            mid_value = half[mid];
        }
        else {
            mid_value = (half[mid - 1] + half[mid]) / 2;
        }
        return mid_value;
    }
};
// @lc code=end

