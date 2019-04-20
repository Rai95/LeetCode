/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 *
 * https://leetcode.com/problems/longest-common-prefix/description/
 *
 * algorithms
 * Easy (33.22%)
 * Total Accepted:    435.9K
 * Total Submissions: 1.3M
 * Testcase Example:  '["flower","flow","flight"]'
 *
 * Write a function to find the longest common prefix string amongst an array
 * of strings.
 * 
 * If there is no common prefix, return an empty string "".
 * 
 * Example 1:
 * 
 * 
 * Input: ["flower","flow","flight"]
 * Output: "fl"
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: ["dog","racecar","car"]
 * Output: ""
 * Explanation: There is no common prefix among the input strings.
 * 
 * 
 * Note:
 * 
 * All given inputs are in lowercase letters a-z.
 * 
 */
class Solution {
public:
	string longestCommonPrefix(vector<string>& strs) {

		int size = strs.size();

		if (size <= 0)
		{
			return "";
		}

		int length = strs[0].length();

		for (int i = 0; i < length; i++)
		{
			for (int j = 0; j < size; j++)
			{
				if (i >= strs[j].size() || strs[j].at(i) != strs[0].at(i))
				{
					return strs[0].substr(0, i);
				}
			}
		}
		return strs[0];
	}
};

