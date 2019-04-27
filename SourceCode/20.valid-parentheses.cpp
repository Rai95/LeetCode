/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */
class Solution {
public:
	bool isValid(string s) {
		typedef stack<char> CharStack;
		CharStack stc;
		int size = s.size();
		for (int i = 0; i < size; i++)
		{
			char c = s.at(i);
			if (stc.size() <= 0)
			{
				stc.push(c);
			}
			else
			{
				if ((int)stc.top()+1 == (int)c || (int)stc.top() + 2 == (int)c)
				{
					stc.pop();
				}
				else
				{
					stc.push(c);
				}
			}
		}
		return stc.size() <= 0;

	}
};

